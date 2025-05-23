const int sensorPin = 2;    
const int motorPin = 8;     
const int buzzerPin = 9;     

unsigned long eyesClosedTime = 0;  // Tracks how long eyes are closed

void setup() {
    pinMode(motorPin, OUTPUT);
    pinMode(buzzerPin, OUTPUT);
    pinMode(sensorPin, INPUT);

    digitalWrite(motorPin, LOW);   // Motor ON initially (LOW = relay ON)
    digitalWrite(buzzerPin, LOW);  // Buzzer OFF initially
}

void loop() {
    int sensorValue = digitalRead(sensorPin); 

    if (sensorValue == LOW) {  // Eyes are closed
        if (eyesClosedTime == 0) {
            eyesClosedTime = millis(); 
        }

        unsigned long elapsedTime = (millis() - eyesClosedTime) / 1000;

        if (elapsedTime >= 3) {
            digitalWrite(buzzerPin, HIGH);  // Buzzer ON
            digitalWrite(motorPin, HIGH);   // Motor OFF (relay OFF)
        }

    } else {  // Eyes are open
        digitalWrite(buzzerPin, LOW);  
        digitalWrite(motorPin, LOW);   
        eyesClosedTime = 0;            
    }
}

