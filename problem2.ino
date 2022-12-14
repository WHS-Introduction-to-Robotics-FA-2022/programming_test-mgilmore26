/*

*/

void setup() {
    pinMode(10,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(6,OUTPUT);
}

void loop() {
    analogWrite(10,168);
    analogWrite(9,2);
    analogWrite(6,16);
}
