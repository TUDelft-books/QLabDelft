// === Arduino Leonardo: doorlopende meting + UV LED timer ===
// Hardware: UV LED op PWM pin D6 (via serieweerstand / transistor indien nodig)

const int UV_LED_PIN = 6;     // jouw pin
//const int BRIGHTNESS = 150;   // 0..255 (jij gebruikte 150)
int uvBrightness = 150; // 0..255

const long BAUD = 9600;

// UV timer state
bool uvActive = false;
unsigned long uvOffAtMs = 0;
const int UV_MIN_S = 1;
const int UV_MAX_S = 60;


// Meetinterval zonder delay()
const unsigned long SAMPLE_INTERVAL_MS = 200;  // ~4 Hz zoals je had
unsigned long lastSampleMs = 0;

// Serial parser
String cmdBuf;

void setup() {
  pinMode(UV_LED_PIN, OUTPUT);
  analogWrite(UV_LED_PIN, 0);   // uit

  Serial.begin(BAUD);
  while (!Serial) { /* Wachten op USB CDC (Leonardo) */ }

  Serial.println("#READY Leonardo gestart @9600");
}

void loop() {
  const unsigned long now = millis();

  // 1) Doorlopende meting (A0 → spanning in V) elke 250 ms
  if (now - lastSampleMs >= SAMPLE_INTERVAL_MS) {
    lastSampleMs = now;
    int sensorValue = analogRead(A0);
    float voltage = sensorValue * (5.0f / 1023.0f);
    Serial.println(voltage, 3);   // <— dataregel (webapp pakt deze als punt)
  }

  // 2) UV countdown niet‑blokkerend
  if (uvActive && now >= uvOffAtMs) {
    analogWrite(UV_LED_PIN, 0);
    uvActive = false;
    Serial.println("#UV_OFF");
  }

  // 3) Seriële commando's verwerken
  handleSerialCommands();
}

void handleSerialCommands() {
  while (Serial.available() > 0) {
    char c = (char)Serial.read();
    if (c == '\r') continue;
    if (c == '\n') {
      processCommand(cmdBuf);
      cmdBuf = "";
    } else {
      if (cmdBuf.length() < 64) cmdBuf += c;
    }
  }
}

void processCommand(String line) {
  line.trim();
  if (line.length() == 0) return;

  // Formaat: UV:<seconden>
  if (line.startsWith("UV:") || line.startsWith("uv:")) {
    String rest = line.substring(line.indexOf(':') + 1);
    rest.trim();
    int sec = rest.toInt();
    if (sec < UV_MIN_S) sec = UV_MIN_S;
    if (sec > UV_MAX_S) sec = UV_MAX_S;

    analogWrite(UV_LED_PIN, uvBrightness);
    uvActive = true;
    uvOffAtMs = millis() + (unsigned long)sec * 1000UL;

    Serial.print("#UV_ON ");
    Serial.print(sec);
    Serial.println("s");
    return;
  }

  if (line.equalsIgnoreCase("help")) {
    Serial.println("#CMD UV:<seconden> (1-60)");
    return;
  }
  
  if (line.startsWith("BR:") || line.startsWith("br:")) {
  String rest = line.substring(line.indexOf(':') + 1);
  rest.trim();
  int val = rest.toInt();
  if (val < 0) val = 0;
  if (val > 255) val = 255;
  uvBrightness = val;
  // Pas lopende UV direct aan, als die aan staat:
  if (uvActive) analogWrite(UV_LED_PIN, uvBrightness);
  Serial.print("#BRIGHTNESS ");
  Serial.println(uvBrightness);
  return;
  }


  Serial.print("#ERR Onbekend: ");
  Serial.println(line);
}