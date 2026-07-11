const int potPin = A0;
const int motorPin = 9;
const int brakeButton = 7;
const int buzzerPin = 10;

const int greenLED = 6;
const int yellowLED = 5;
const int redLED = 4;

int battery = 60;

void setup() {
  pinMode(motorPin, OUTPUT);
  pinMode(brakeButton, INPUT_PULLUP);
  pinMode(buzzerPin, OUTPUT);

  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  Serial.begin(9600);

  Serial.println("EV Regenerative Braking System");
  Serial.println("System Started");
  Serial.println("------------------------------");
}

void loop() {

  int potValue = analogRead(potPin);

  int motorSpeed = map(potValue, 0, 1023, 0, 255);
  int vehicleSpeed = map(motorSpeed, 0, 255, 0, 100);

  int brakeState = digitalRead(brakeButton);

  if (brakeState == LOW && vehicleSpeed > 0) {

    
    analogWrite(motorPin, 0);

    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(redLED, LOW);

    tone(buzzerPin, 1000);

    if (battery < 100) {
      battery++;
    }

    Serial.println("Mode : Regenerative Braking");
    Serial.print("Speed : ");
    Serial.print(vehicleSpeed);
    Serial.println(" km/h");

    Serial.print("Battery : ");
    Serial.print(battery);
    Serial.println("%");

    Serial.println("Energy Recovery : ACTIVE");
  }

  else if (vehicleSpeed == 0) {

    
    analogWrite(motorPin, 0);

    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, HIGH);

    noTone(buzzerPin);

    Serial.println("Mode : Vehicle Stopped");
    Serial.println("Speed : 0 km/h");

    Serial.print("Battery : ");
    Serial.print(battery);
    Serial.println("%");
  }

  else {

    
    analogWrite(motorPin, motorSpeed);

    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);

    noTone(buzzerPin);

    Serial.println("Mode : Driving");

    Serial.print("Speed : ");
    Serial.print(vehicleSpeed);
    Serial.println(" km/h");

    Serial.print("Battery : ");
    Serial.print(battery);
    Serial.println("%");
  }

  Serial.println("------------------------------");

  delay(500);
}