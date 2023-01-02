int bouton = 10 ;


void setup() {
  pinMode(bouton, INPUT);
  Serial.begin(9600);
  
  // put your setup code here, to run once:

}

void loop() {

if(digitalRead(bouton)==HIGH){
  Serial.println("ON");
  }
else {
   Serial.println("OFF");
  
  }
  
  delay(100);// put your main code here, to run repeatedly:

}
