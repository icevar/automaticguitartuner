const int button=13;
const int led1=2;
const int led2=3;
const int led3=4;
const int led4=5;
const int led5=6;
const int led6=7;

int counter=0;
int state=0;
int laststate=0;


void setup() {
  pinMode(button,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  state = digitalRead(button);
  if (state!=laststate){
    counter=counter+1;
    laststate=state;
  } else {
  }

  if (counter%12 ==0.0){
    ledoff();
    digitalWrite(led1,HIGH);
  } else if ((counter-2)%12==0) {
     ledoff();
     digitalWrite(led2,HIGH);  
  } else if((counter-4)%12==0) {
     ledoff();
     digitalWrite(led3,HIGH);
  } else if((counter-6)%12==0) {
     ledoff();
     digitalWrite(led4,HIGH);
  } else if((counter-8)%12==0) {
     ledoff();
     digitalWrite(led5,HIGH);
  } else if((counter-10)%12==0) {
     ledoff();
     digitalWrite(led6,HIGH);
  } else {
    ledoff();
  }
  
}

void ledoff(){
     digitalWrite(led1,LOW);
     digitalWrite(led2,LOW);
     digitalWrite(led3,LOW);
     digitalWrite(led4,LOW);
     digitalWrite(led5,LOW);
     digitalWrite(led6,LOW);
}
  
