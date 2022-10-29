bluetooth with pir    
BY DEBANKAR SHUBHRAM


int inputPin = 2;  //defining pin             
int pirState = 0;   // defining pirstate at beigning          
int val = 0;          //taking a variable val          
 
void setup() {      
  pinMode(inputPin, INPUT);   //about the inputpin that is input   
 
  Serial.begin(9600);    //bautrate
}
 
void loop(){
  val = digitalRead(inputPin);  //asignning val the digitalread of the inputpin
  if (val == 1) {            //condition
    if (pirState == 0) {      //condition
      Serial.println("A");     //just a printing value to know the output
      pirState = 1;            //asigning pirstate 
    }
  } else {
    if (pirState == 1){      //condition
      Serial.println("a");   //just to know the output
      pirState = 0;           // asigning pirstate
    }
  }
}
