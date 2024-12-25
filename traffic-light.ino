constexpr int LED_PIN2 = 2;
constexpr int LED_PIN3 = 3;
constexpr int LED_PIN4 = 4;

constexpr int LONG_INTERVAL = 3000;
constexpr int SHORT_INTERVAL = 1500;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  //pinMode(LED_BUILTIN, OUTPUT);

  pinMode(LED_PIN2, OUTPUT);
  pinMode(LED_PIN3, OUTPUT);
  pinMode(LED_PIN4, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  //digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on by making the voltage HIGH

  // RED LIGHT
  digitalWrite(LED_PIN2, HIGH);
  digitalWrite(LED_PIN3, LOW);
  digitalWrite(LED_PIN4, LOW);
  delay(LONG_INTERVAL);                      // wait for a second

  // YELLOW LIGHT
  digitalWrite(LED_PIN2, LOW);
  digitalWrite(LED_PIN3, HIGH);
  digitalWrite(LED_PIN4, LOW);
  delay(SHORT_INTERVAL);                      // wait for a second

  // GREEN LIGHT
  digitalWrite(LED_PIN2, LOW);
  digitalWrite(LED_PIN3, LOW);
  digitalWrite(LED_PIN4, HIGH);
  delay(LONG_INTERVAL);                      // wait for a second

  // YELLOW LIGHT
  digitalWrite(LED_PIN2, LOW);
  digitalWrite(LED_PIN3, HIGH);
  digitalWrite(LED_PIN4, LOW);
  delay(SHORT_INTERVAL);                      // wait for a second
}