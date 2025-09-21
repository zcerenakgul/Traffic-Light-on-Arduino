const int RED    = 2;
const int YELLOW = 3;
const int GREEN  = 4;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);

  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, LOW);
}

void setLights(bool r, bool y, bool g){
  digitalWrite(RED, r ? LOW : HIGH);
  digitalWrite(YELLOW, y ? LOW : HIGH);
  digitalWrite(GREEN, g ? LOW : HIGH);
}
void loop() {
  setLights(true,false,false);
  delay(4500);


  setLights(true,true,false);
  delay(500);

  setLights(false,false,true);
   delay(3000);

  setLights(false,true,false);
   delay(750);



}
