char Incoming_value = 0;
int relay=3;              
void setup() 
{
  Serial.begin(9600);         
  pinMode(relay, OUTPUT);       
}

void loop()
{
  if(Serial.available() > 0)  
  {
    Incoming_value = Serial.read();      
    Serial.print(Incoming_value);        
    Serial.print("\n");        
    if(Incoming_value == '1')             
      digitalWrite(relay, HIGH);  
    else if(Incoming_value == '0')       
      digitalWrite(relay, LOW);   
  }                            
}
