const int trig = 6;
const int echo =7;
float duration, distance;

void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(5);
  digitalWrite(trig, HIGH);
  delayMicroseconds(5);
  digitalWrite(trig, LOW);
  
  duration = pulseIn(echo, HIGH);
  
  distance = (0.034*duration)/2;
  
  Serial.println("Distance is: ");
  Serial.println(distance);
  
  delay(500);
  
  
}
