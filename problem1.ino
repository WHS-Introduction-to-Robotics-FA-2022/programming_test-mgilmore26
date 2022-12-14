/*

*/

void setup() {
    pinMode(10,OUTPUT);
    pinMode(3,OUTPUT);
    digitalWrite(10,HIGH); digitalWrite(3,HIGH);
    delay(1000);
       digitalWrite(10,LOW); digitalWrite(3,LOW);
       delay(1000);
    
    
}

void loop() {
     digitalWrite(10,HIGH); digitalWrite(3,LOW);
    delay(250);
    digitalWrite(3,HIGH);digitalWrite(10,LOW);
    delay(250);
}
