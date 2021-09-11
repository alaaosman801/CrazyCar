#define in1 4
#define in2 5
#define in3 6
#define in4 7
#define ForLed 9
#define BackLed 10
#define LtLed 11
#define RtLed 12

void setup() {
  // put your setup code here, to run once:
pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);
pinMode(in3, OUTPUT);
pinMode(in4, OUTPUT);
pinMode(ForLed, OUTPUT);
pinMode(BackLed, OUTPUT);
pinMode(LtLed, OUTPUT);
pinMode(RtLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int mov= random()%5;
if(mov == 1){
  forward();
  delay(15);
  digitalWrite(ForLed,HIGH);
    delay(1000);
    digitalWrite(ForLed,LOW);
    delay(1000);
  }
  else if(mov == 2){
    backward();
    delay(15);
    digitalWrite(BackLed,HIGH);
    delay(1000);
    digitalWrite(BackLed,LOW);
    delay(1000);
    }
    else if(mov == 3){
      left();
      delay(15);
      digitalWrite(LtLed,HIGH);
    delay(1000);
    digitalWrite(LtLed,LOW);
    delay(1000);
      }
      else if(mov == 4){
        right();
        delay(15);
        digitalWrite(RtLed,HIGH);
    delay(1000);
    digitalWrite(RtLed,LOW);
    delay(1000);
        }
        else{
          Stop();
          delay(15);
          digitalWrite(ForLed,LOW);
          digitalWrite(BackLed,LOW);
          digitalWrite(LtLed,LOW);
           digitalWrite(RtLed,LOW);
           delay(1000);
          }
         // delay(1000);
}
void forward(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  }
void backward(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  }
void left(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  }
void right(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  }
  void Stop(){
    digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
    }
