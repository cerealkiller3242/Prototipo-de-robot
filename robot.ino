// Puente H
const int pinIN3 = 12;
const int pinIN4 = 13;
const int pinENB = 9;  // Pin PWM

void setup() {
  pinMode(pinIN3, OUTPUT);
  pinMode(pinIN4, OUTPUT);
  pinMode(pinENB, OUTPUT);

  delay(2000);  // Esperar 2 s antes de iniciar la secuencia
}

void loop() {
  // Avanzar al 80% durante 5 s
  digitalWrite(pinIN3, HIGH);
  digitalWrite(pinIN4, LOW);
  analogWrite(pinENB, 204);
  delay(5000);

  // Detener 2 s
  digitalWrite(pinIN3, LOW);
  digitalWrite(pinIN4, LOW);
  analogWrite(pinENB, 0);
  delay(2000);

  // Retroceder al 60% durante 3 s
  digitalWrite(pinIN3, LOW);
  digitalWrite(pinIN4, HIGH);
  analogWrite(pinENB, 153);
  delay(3000);

  // Detener 2 s
  digitalWrite(pinIN3, LOW);
  digitalWrite(pinIN4, LOW);
  analogWrite(pinENB, 0);
  delay(2000);

  // Avanzar al 100% durante 4 s
  digitalWrite(pinIN3, HIGH);
  digitalWrite(pinIN4, LOW);
  analogWrite(pinENB, 255);
  delay(4000);

  // Detener 3 s
  digitalWrite(pinIN3, LOW);
  digitalWrite(pinIN4, LOW);
  analogWrite(pinENB, 0);
  delay(3000);
}
