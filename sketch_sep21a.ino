const int ledCount = 8;
int count=0; 
int ledPins[] = { 
  23, 22, 21, 32, 33, 25, 26, 27}; 


void setup() {
  // put your setup code here, to run once:
pinMode(5, INPUT);
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT); 
    Serial.begin(115200);
  }



}

void loop() {
  // put your main code here, to run repeatedly:
  
  int buttonstate = digitalRead(5);
  if(buttonstate==HIGH){
    Serial.print( buttonstate);
    count++;
    if(count<=8){
    for(int i=-1; i<count; i++ ){
        digitalWrite(ledPins[i],HIGH);
      delay(100);
      }
    }

    if(count>8){
    for(int i=7 ,c=1; count-(2*c-1)>i; i--,c++ ){
        digitalWrite(ledPins[i],LOW);
      delay(100);
      }
      if(count==16)
      
      count=0;
      }
    
   
 }
}
