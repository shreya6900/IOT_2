int state;
void setup() {
  // put your setup code here, to run once:
  pinMode(D0,INPUT);
  pinMode(D2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  state=digitalRead(D0);
  Serial.println(state);
  digitalWrite(D2,state); 
  delay(500);
  
 
}
