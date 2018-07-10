
static int sig=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0) {
  sig=Serial.read();

  }  
  Serial.println(sig);
}

