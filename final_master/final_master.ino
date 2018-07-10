#define MIC A0
static int sig=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
sig= analogRead(MIC);
Serial.println(sig);

}







































































