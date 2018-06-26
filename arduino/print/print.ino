String inputString = "";
boolean stringComplete = false;

void setup() {
  pinMode(12,OUTPUT);
  Serial.begin(115200);
}

void loop() {
//  delay(250);
//  Serial.println(1);
//  delay(250);
//  Serial.println(2);

  if(stringComplete){
    if(inputString == "A1$"){
      digitalWrite(12,HIGH);
      Serial.println("A1$");
    }
    else if(inputString == "A0$"){
      digitalWrite(12,LOW);
      Serial.println("A0$");
    }
    stringComplete = false;
    inputString = "";
  } 
//  if(stringComplete){
//    Serial.println(inputString);
//    stringComplete = false;
//    inputString = "";
//    }
}

void serialEvent(){
  while(Serial.available()){
    char inChar = (char)Serial.read();
    inputString += inChar;

    if(inChar == '$'){
      stringComplete = true;
    }
  }
}

