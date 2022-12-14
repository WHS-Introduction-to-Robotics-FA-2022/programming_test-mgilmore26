int val;

void setup()
{

pinMode(LED_BUILTIN,OUTPUT);
     Serial.begin(9600);


}
void loop()
{
   val=analogRead(A2);
   Serial.println(val);
if (val > 512) {digitalWrite(LED_BUILTIN, HIGH);}
else {digitalWrite(LED_BUILTIN,LOW);}

    
    
}
