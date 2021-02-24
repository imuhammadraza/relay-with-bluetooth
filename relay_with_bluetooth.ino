//--------BT app control---------//
//Program for four switches but in our case we are using pin 11

int switch1=11;
int switch2=12;
int switch3=8;
int switch4=7;

int Received=0;
int switch1_state =0;
int switch2_state =0;
int switch3_state = 0;
int switch4_state = 0;


void setup(){
  
  Serial.begin(9600);
  pinMode(switch1,OUTPUT);
  pinMode(switch2,OUTPUT);
  pinMode(switch3,OUTPUT);
  pinMode(switch4,OUTPUT);
  
}

void loop(){
 
 if(Serial.available()>0)
 { 
    Received = Serial.read();
    
 }

////////////////switch1/////////////////////

if (switch1_state == 0 && Received == '1')
  {
    digitalWrite(switch1,HIGH);
    switch1_state=1;
    Received=0;  
  }
if (switch1_state ==1 && Received == '1')
  {
    digitalWrite(switch1,LOW);
    switch1_state=0;
    Received=0;
  }

////////////////switch2/////////////////////
if (switch2_state == 0 && Received == '2')
  {
    digitalWrite(switch2,HIGH);
    switch2_state=1;
    Received=0;  
  }
if (switch2_state ==1 && Received == '2')
  {
    digitalWrite(switch2,LOW);
    switch2_state=0;
    Received=0;
  }
///////////////////////////////////////////
////////////////switch3/////////////////////
if (switch3_state == 0 && Received == '3')
  {
    digitalWrite(switch3,HIGH);
    switch3_state=1;
    Received=0;  
  }
if (switch3_state ==1 && Received == '3')
  {
    digitalWrite(switch3,LOW);
    switch3_state=0;
    Received=0;
  }
///////////////////////////////////////////
////////////////switch4/////////////////////
if (switch4_state == 0 && Received == '4')
  {
    digitalWrite(switch4,HIGH);
    switch4_state=1;
    Received=0;  
  }
if (switch4_state ==1 && Received == '4')
  {
    digitalWrite(switch4,LOW);
    switch4_state=0;
    Received=0;
  }
}

    
