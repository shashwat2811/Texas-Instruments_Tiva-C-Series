#define LS 40
#define RS 39
#define LD 28
#define RD 29
void setup()
{
pinMode(LS, OUTPUT);
pinMode(RS, OUTPUT);
pinMode(LD, OUTPUT);
pinMode(RD, OUTPUT);
}
void loop()
{
digitalWrite(LD, 0);
digitalWrite(RD, 0);
analogWrite(LS, 30);
analogWrite(RS, 30);
delay(2000);
digitalWrite(LD, 0);
digitalWrite(RD, 0);
analogWrite(LS, 30);
analogWrite(RS, 0);
delay(3000);
digitalWrite(LD, 0);
digitalWrite(RD, 0);
analogWrite(LS, 30);
analogWrite(RS, 30);
delay(2000);
digitalWrite(LD, 0);
digitalWrite(RD, 0);
analogWrite(LS, 30);
analogWrite(RS, 0);
delay(3000);
digitalWrite(LD, 0);
digitalWrite(RD, 0);
analogWrite(LS, 30);
analogWrite(RS, 30);
delay(2000);
digitalWrite(LD, 0);
digitalWrite(RD, 0);
analogWrite(LS, 30);
analogWrite(RS, 0);
delay(3000);
digitalWrite(LD, 0);
digitalWrite(RD, 0);
analogWrite(LS, 30);
analogWrite(RS, 30);
delay(2000);

}








