//BUTTONS PINS 
#define b_pin0 13
#define b_pin1 12
#define b_pin2 11
#define b_pin3 10
#define b_pin4 9
// LEDS PINS
#define l_pin0 7
#define l_pin1 6
#define l_pin2 5
#define l_pin3 4
#define l_pin4 3

void setup() {
    Serial.begin(9600);
    pinMode(b_pin0, INPUT);
    pinMode(b_pin1, INPUT);
    pinMode(b_pin2, INPUT);
    pinMode(b_pin3, INPUT);
    pinMode(b_pin4, INPUT);
    pinMode(l_pin0, OUTPUT);
    pinMode(l_pin1, OUTPUT);
    pinMode(l_pin2, OUTPUT);
    pinMode(l_pin3, OUTPUT);
    pinMode(l_pin4, OUTPUT);
}

void loop() {
    if(digitalRead(b_pin0) == HIGH){
        Serial.println("pin 0 ");
        digitalWrite(l_pin0, HIGH);
    }
    if(digitalRead(b_pin1) == HIGH){
        Serial.println("pin 1 ");
        digitalWrite(l_pin1, HIGH);
    }
    if(digitalRead(b_pin2) == HIGH){
        Serial.println("pin 2 ");
        digitalWrite(l_pin2, HIGH);
    }
    if(digitalRead(b_pin3) == HIGH){
        Serial.println("pin 3 ");
        digitalWrite(l_pin3, HIGH);
    }
    if(digitalRead(b_pin4) == HIGH){
        Serial.println("pin 4 ");
        digitalWrite(l_pin4, HIGH);
    }

    if(digitalRead(b_pin0) == LOW){
        digitalWrite(l_pin0, LOW);
    }
    if(digitalRead(b_pin1) == LOW){
        digitalWrite(l_pin1, LOW);
    }
    if(digitalRead(b_pin2) == LOW){
        digitalWrite(l_pin2, LOW);
    }
    if(digitalRead(b_pin3) == LOW){
        digitalWrite(l_pin3, LOW);
    }
    if(digitalRead(b_pin4) == LOW){
        digitalWrite(l_pin4, LOW);
    }

    delay(200); // Przykładowe opóźnienie, aby nie spamować co chwilę portu szeregowego
}
