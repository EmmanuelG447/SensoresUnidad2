const int pin = 2;

void setup() {
  pinMode(pin, OUTPUT);  //definir pin como salida
}
 
void loop(){
  digitalWrite(pin, HIGH);   // poner el Pin en HIGH
  delay(5000);               // esperar 5 segundos
  digitalWrite(pin, LOW);    // poner el Pin en LOW
  delay(5000);               // esperar 5 segundos
}