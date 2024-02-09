// C++ code
//
int in1=2;
int in2=3;
int in3=4;
int in4=5;
int en1=10;
int en2=9;
void setup()
{
  Serial.begin(9600);
  pinMode(en1,OUTPUT);
  pinMode(en2,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
}

void loop()
    
{digitalWrite(en1,HIGH);
          digitalWrite(en2,HIGH);
  
  switch(Serial.read()) {
    case 'F':digitalWrite(in1,HIGH);
              digitalWrite(in2,LOW);
               digitalWrite(in3,HIGH);
                digitalWrite(in2,LOW);
   
          
              
    break;
      case 'B':digitalWrite(in1,LOW);
              digitalWrite(in2,HIGH);
               digitalWrite(in3,LOW);
                digitalWrite(in2,HIGH);
             
    break;
      case 'R':digitalWrite(in1,HIGH);
              digitalWrite(in2,LOW);
               digitalWrite(in3,LOW);
                digitalWrite(in2,LOW);
        
    break;
       case 'L':digitalWrite(in1,LOW);
              digitalWrite(in2,LOW);
               digitalWrite(in3,HIGH);
                digitalWrite(in2,LOW);
              
    break;
        case 'S':digitalWrite(in1,LOW);
              digitalWrite(in2,LOW);
               digitalWrite(in3,LOW);
                digitalWrite(in2,LOW);
         
    break;
    
    
  }
}