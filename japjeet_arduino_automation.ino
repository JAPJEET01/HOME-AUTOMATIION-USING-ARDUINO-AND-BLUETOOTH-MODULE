//FOR VIDEO 
//VISIT :- https://youtu.be/oGQfVI8lAf4
//WEBSITE :- WWW.japjeetsingh.tech


char data = 0;                
void setup() 

{
Serial.begin(9600);        
pinMode(8, OUTPUT);//relay1 output
pinMode(13, OUTPUT);//relay2 output
pinMode(11, OUTPUT);//relay3 output
pinMode(12, OUTPUT);  //relay4 output
pinMode(3, INPUT); // pir sensor input
pinMode(9, OUTPUT); //Buzzer pin  output
}
void loop()
{
  if(digitalRead(3) == HIGH){ //checks if pir sensor pin is high 
tone(9, 400);
delay(300);
noTone(9);
delay(300);
tone(9, 400);
delay(300);
}
else {
noTone(9);
 }
if(Serial.available() > 0)  
{
data = Serial.read();      
Serial.print(data);        
Serial.print("\n");        
if(data == 'a')             
digitalWrite(8, LOW);  
else if(data == 'b')     
digitalWrite(8, HIGH); 

  if(data == 'c')             
digitalWrite(13, LOW);  
else if(data == 'd')     
digitalWrite(13, HIGH);

if(data == 'e')             
digitalWrite(11, LOW);  
else if(data == 'f')     
digitalWrite(11, HIGH);

if(data == 'g')             
digitalWrite(12, HIGH);  
else if(data == 'h')     
digitalWrite(12, LOW);
}                            

}
