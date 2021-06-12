const int buttonpin= PUSH1;
const int ledpin= BLUE_LED;
int buttonpin=0;
void setup()
{
  // put your setup code here, to run once:
  pinMode(AO, INPUT);
  Serial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:
  int a=0;
  a=analogRead(A0);
  Serial.println(a);
  delay(1000);
}







