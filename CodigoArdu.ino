// Constantes que no cambiarán. Se utilizan para establecer los números de pin:
const int pinBoton1 =  2;      
const int pinBoton2 =  3;      
const int pinBoton3 =  4;       
const int pinLed1_1 = 10;       
const int pinLed1_2 =  9;       
const int pinLed2_1 =  8;       
const int pinLed2_2 =  7;       
const int pinLed3_1 =  6;       
const int pinLed3_2 =  5;       

// Variables que cambiarán:
int estadoBoton1 = 0;           // variable para leer el estado del primer botón pulsador
int estadoBoton2 = 0;           // variable para leer el estado del segundo botón pulsador
int estadoBoton3 = 0;           // variable para leer el estado del tercer botón pulsador

void setup() {
  pinMode(pinLed1_1, OUTPUT);   // inicializa el pin del primer LED asociado al primer botón como salida
  pinMode(pinLed1_2, OUTPUT);   // inicializa el pin del segundo LED asociado al primer botón como salida
  pinMode(pinLed2_1, OUTPUT);   // inicializa el pin del primer LED asociado al segundo botón como salida
  pinMode(pinLed2_2, OUTPUT);   // inicializa el pin del segundo LED asociado al segundo botón como salida
  pinMode(pinLed3_1, OUTPUT);   // inicializa el pin del primer LED asociado al tercer botón como salida
  pinMode(pinLed3_2, OUTPUT);   // inicializa el pin del segundo LED asociado al tercer botón como salida
  
  pinMode(pinBoton1, INPUT);    // inicializa el pin del primer botón pulsador como entrada
  pinMode(pinBoton2, INPUT);    // inicializa el pin del segundo botón pulsador como entrada
  pinMode(pinBoton3, INPUT);    // inicializa el pin del tercer botón pulsador como entrada
}

void loop() {
  // Lee el estado de los botones
  estadoBoton1 = digitalRead(pinBoton1);  // estado del primer botón
  estadoBoton2 = digitalRead(pinBoton2);  // estado del segundo botón
  estadoBoton3 = digitalRead(pinBoton3);  // estado del tercer botón
  
  // Reacciona al estado de los botones
  if (estadoBoton1 == HIGH) {
    digitalWrite(pinLed1_1, HIGH);    // enciende el primer LED asociado al primer botón
    digitalWrite(pinLed1_2, HIGH);    // enciende el segundo LED asociado al primer botón
  } else {
    digitalWrite(pinLed1_1, LOW);     // apaga el primer LED asociado al primer botón
    digitalWrite(pinLed1_2, LOW);     // apaga el segundo LED asociado al primer botón
  }
  
  if (estadoBoton2 == HIGH) {
    digitalWrite(pinLed2_1, HIGH);    // enciende el primer LED asociado al segundo botón
    digitalWrite(pinLed2_2, HIGH);    // enciende el segundo LED asociado al segundo botón
  } else {
    digitalWrite(pinLed2_1, LOW);     // apaga el primer LED asociado al segundo botón
    digitalWrite(pinLed2_2, LOW);     // apaga el segundo LED asociado al segundo botón
  }
  
  if (estadoBoton3 == HIGH) {
    digitalWrite(pinLed3_1, HIGH);    // enciende el primer LED asociado al tercer botón
    digitalWrite(pinLed3_2, HIGH);    // enciende el segundo LED asociado al tercer botón
  } else {
    digitalWrite(pinLed3_1, LOW);     // apaga el primer LED asociado al tercer botón
    digitalWrite(pinLed3_2, LOW);     // apaga el segundo LED asociado al tercer botón
  }
}

