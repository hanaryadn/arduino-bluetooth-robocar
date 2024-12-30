// inisiasi PIN
int IN1 = 13;
int IN2 = 12;
int IN3 = 11;
int IN4 = 10;
char val;

// setup
void setup() 
{ 
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
Serial.begin(9600);
}

// loop input
void loop()
{
 while (Serial.available() > 0)
 {
 val = Serial.read();
 Serial.println(val);
 }
 
 if( val == 'F') //Maju
 {
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, LOW);
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, LOW); 
 }
 else if(val == 'B') //Mundur
 {
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, HIGH);
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, HIGH); 
 }
 
 else if(val == 'R') //Kanan
 {
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, LOW);
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, LOW);
 }
 else if(val == 'L') //Kiri
 {
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, LOW);
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, LOW); 
 }
 
 else if(val == 'S') //Berhenti
 {
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, LOW);
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, LOW); 
 }
 else if(val == 'G') //Maju Kanan
 {
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, LOW);
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, LOW);
 }
 else if(val == 'H') //Mundur Kanan
 {
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, HIGH);
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, LOW);
 }
 else if(val == 'I') //Maju Kiri
 {
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, LOW);
 digitalWrite(IN3, HIGH); 
 digitalWrite(IN4, LOW);
 }
 else if(val == 'J') //Mundur Kiri
 {
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, LOW);
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, HIGH); 
 }
}
