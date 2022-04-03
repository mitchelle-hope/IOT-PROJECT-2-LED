// C++ code
//
int animationspeed = 0;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{ 
  animationspeed  = 500;
  digitalWrite(13, HIGH);
  delay(animationspeed); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(animationspeed); // Wait for 1000 millisecond(s)
  digitalWrite(12, HIGH);
  delay(animationspeed); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);
  delay(animationspeed); // Wait for 1000 millisecond(s)
  digitalWrite(11, HIGH);
  delay(animationspeed); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
  delay(animationspeed); // Wait for 1000 millisecond(s)
  
  
}