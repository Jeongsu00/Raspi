int ENA=2;
int IN1=3;
int IN2=4;
int ENB=5;
int IN3=6;
int IN4=7;

int ENA1=8;
int IN11=9;
int IN21=10;
int ENB1=11;
int IN31=12;
int IN41=13;

void setup()
{
 pinMode(ENA,OUTPUT);
 pinMode(ENB,OUTPUT);
 pinMode(IN1,OUTPUT);
 pinMode(IN2,OUTPUT);
 pinMode(IN3,OUTPUT);
 pinMode(IN4,OUTPUT);
 digitalWrite(ENA,HIGH);
 digitalWrite(ENB,HIGH);

 pinMode(ENA1,OUTPUT);
 pinMode(ENB1,OUTPUT);
 pinMode(IN11,OUTPUT);
 pinMode(IN21,OUTPUT);
 pinMode(IN31,OUTPUT);
 pinMode(IN41,OUTPUT);
 digitalWrite(ENA1,HIGH);
 digitalWrite(ENB1,HIGH);
}

void loop()
{
 digitalWrite(IN1,LOW);
 digitalWrite(IN2,HIGH);
 digitalWrite(IN3,HIGH);
 digitalWrite(IN4,LOW);
 digitalWrite(IN11,LOW);
 digitalWrite(IN21,HIGH);
 digitalWrite(IN31,HIGH);
 digitalWrite(IN41,LOW);
 delay(10);

 digitalWrite(IN1,LOW);
 digitalWrite(IN2,HIGH);
 digitalWrite(IN3,LOW);
 digitalWrite(IN4,HIGH);
 digitalWrite(IN11,LOW);
 digitalWrite(IN21,HIGH);
 digitalWrite(IN31,LOW);
 digitalWrite(IN41,HIGH);
 delay(10);

 digitalWrite(IN1,HIGH);
 digitalWrite(IN2,LOW);
 digitalWrite(IN3,LOW);
 digitalWrite(IN4,HIGH);
 digitalWrite(IN11,HIGH);
 digitalWrite(IN21,LOW);
 digitalWrite(IN31,LOW);
 digitalWrite(IN41,HIGH);
 delay(10);

 digitalWrite(IN1,HIGH);
 digitalWrite(IN2,LOW);
 digitalWrite(IN3,HIGH);
 digitalWrite(IN4,LOW);
 digitalWrite(IN11,HIGH);
 digitalWrite(IN21,LOW);
 digitalWrite(IN31,HIGH);
 digitalWrite(IN41,LOW);
 delay(10);
}
