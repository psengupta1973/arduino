#define LED1 13
#define LED2 12

void setup() {
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    if (Serial.available()) {
        char serialListener = Serial.read();
        if (serialListener == 'H') {
            digitalWrite(LED1, HIGH);
            digitalWrite(LED2, LOW);
        }
        else if (serialListener == 'L') {
            digitalWrite(LED1, LOW);
            digitalWrite(LED2, HIGH);
        }
        else{
          digitalWrite(LED1, LOW);
          digitalWrite(LED2, LOW);
        }
    }
}
