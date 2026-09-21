// Pin definitions
const int BUTTON_PIN = 2;
const int GREEN_LED = 8;
const int RED_LED = 9;
const int BUZZER = 10;

void setup()
{
  // Configure pins
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);

  // Initial state = NORMAL
  digitalWrite(GREEN_LED, HIGH);
  digitalWrite(RED_LED, LOW);
  digitalWrite(BUZZER, LOW);
}

void loop()
{
  // Read the button
  int buttonState = digitalRead(BUTTON_PIN);

  // Button pressed = FAULT
  if (buttonState == LOW)
  {
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(RED_LED, HIGH);
    digitalWrite(BUZZER, HIGH);
  }
  else
  {
    // NORMAL condition
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(RED_LED, LOW);
    digitalWrite(BUZZER, LOW);
  }
}