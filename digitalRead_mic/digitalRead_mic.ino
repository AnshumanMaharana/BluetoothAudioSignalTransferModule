static int sig=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(7,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
sig=digitalRead(7);
Serial.println(sig);
}
