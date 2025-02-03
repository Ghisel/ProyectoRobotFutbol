int EnableA  =3; 
int motorA1 = 5;
int motorA2 = 6;
int motorB1 = 9;
int motorB2 = 10;
int EnableB  =11;
int ingreso;

void setup() {
  Serial.begin (9600);
  pinMode(EnableA, OUTPUT);
  pinMode(EnableB, OUTPUT);
  pinMode (motorA1, OUTPUT);
  pinMode (motorA2, OUTPUT);
  pinMode (motorB1, OUTPUT);
  pinMode (motorB2, OUTPUT);  
 
}
void loop() {
   
  if (Serial.available()>0)
  {
  ingreso = Serial.read();
  
  if (ingreso == 'F') // 'a' adelante
  {
    
  analogWrite (EnableA, 255);
  digitalWrite (motorA1, HIGH);
  digitalWrite (motorA2, LOW);
  analogWrite (EnableB, 255);
  digitalWrite (motorB1, HIGH);
  digitalWrite (motorB2, LOW);
  

  }
  if (ingreso == 'B') // 'r' atrás
  {
  analogWrite (EnableA, 255);
  digitalWrite (motorA1, LOW);
  digitalWrite (motorA2, HIGH);
  analogWrite (EnableB, 255);
  digitalWrite (motorB1, LOW);
  digitalWrite (motorB2, HIGH);

  }
  if (ingreso == 'L') // DERECHA
  {
  analogWrite (EnableA, 255);
  digitalWrite (motorA1, HIGH);
  digitalWrite (motorA2, LOW);
  analogWrite (EnableB, 255);
  digitalWrite (motorB1, LOW);
  digitalWrite (motorB2, HIGH);
  }
  if (ingreso == 'R') // IZQUIERDA
  {
  analogWrite (EnableA, 255);
  digitalWrite (motorA1, LOW);
  digitalWrite (motorA2, HIGH);
  analogWrite (EnableB, 255);
  digitalWrite (motorB1, HIGH);
  digitalWrite (motorB2, LOW);
  }  
  if (ingreso == 'S') // 's' Stop
  {
    analogWrite (EnableA, 0);
  digitalWrite (motorA1, LOW);
  digitalWrite (motorA2, LOW);
  analogWrite (EnableB, 0);
  digitalWrite (motorB1, LOW);
  digitalWrite (motorB2, LOW);
  }  
  }
}
