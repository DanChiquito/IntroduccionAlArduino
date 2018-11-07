
//Declarar varibles para uso de los ´puertos

int LED =13; //El NUMERO SE ASOCIA CON EL PUERTO

void setup() {
  pinMode(LED, OUTPUT); //pinMode(puerto , entrada o salida)

}

void loop() {
digitalWrite(LED, HIGH); // digitalWrite(puerto, HIGH o LOW) HIGH entrega 5 volts y LOW nada
delay(1000); // Esta en milisegundos
digitalWrite(LED, LOW);
delay(1000);
}
