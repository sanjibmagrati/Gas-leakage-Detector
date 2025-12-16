// ===== PIN DEFINITIONS =====
const int gasSensorPin = 2;   // MQ sensor DOUT (LOW = gas detected)
const int outputPin    = 5;   // Fan + Buzzer together

// ===== TIMING =====
const unsigned long MIN_RUN_TIME = 5000; // 5 seconds

// ===== VARIABLES =====
unsigned long startTime = 0;
bool systemRunning = false;

void setup() {
  pinMode(gasSensorPin, INPUT);
  pinMode(outputPin, OUTPUT);

  digitalWrite(outputPin, LOW);
}

void loop() {
  int gasState = digitalRead(gasSensorPin); // LOW = gas detected
  unsigned long now = millis();

  // GAS DETECTED
  if (gasState == LOW) {
    if (!systemRunning) {
      systemRunning = true;
      startTime = now;
      digitalWrite(outputPin, HIGH); // Fan + Buzzer ON
    }
  }
  // NO GAS
  else {
    if (systemRunning && (now - startTime >= MIN_RUN_TIME)) {
      systemRunning = false;
      digitalWrite(outputPin, LOW); // Fan + Buzzer OFF
    }
  }
}
