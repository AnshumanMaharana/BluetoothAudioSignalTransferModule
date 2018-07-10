#define MIC A0
int sig=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
sig= analogRead(MIC);
Serial.println(sig);
}
