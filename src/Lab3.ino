
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

uint16_t value;

void setup()
{
pinMode(D5, OUTPUT); 
pinMode(D6, OUTPUT); 
pinMode(D7, OUTPUT); 

}

void loop()
{
analogWrite(D5, 0);
analogWrite(D6, 255);
analogWrite(D7, 255);
delay(1000);
analogWrite(D5, 255);
analogWrite(D6, 0);
analogWrite(D7, 255);
delay(1000);
analogWrite(D5, 255);
analogWrite(D6, 255);
analogWrite(D7, 0);
delay(1000);
analogWrite(D5, 127);
analogWrite(D6, 255);
analogWrite(D7, 44);
delay(1000);
analogWrite(D5, 255);
analogWrite(D6, 155);
analogWrite(D7, 155);
delay(1000);
analogWrite(D5, 0);
analogWrite(D6, 128);
analogWrite(D7, 255);
delay(1000);
}

