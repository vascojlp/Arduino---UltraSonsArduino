//--- BIBLIOTECAS
#include <dht.h>
#include "Variaveis.h"


//--- Inicializacao dos Sensores
dht DHT;

//--- DEFINICAO DE PINOS
// Analog Pins
#define DHT11sensorPin A1       // Input Humidity sensor and Air temperature 

// digital pins
#define RL1powerPin 6       // power Output to UltraSons
#define RL2powerPin 7        // power to Fan


//--- VOID SETUP
void setup() {

  Serial.begin(9600);


  //--- Analog pins
  pinMode(DHT11sensorPin, INPUT);

  //--- Digital pins
  digitalWrite(RL1powerPin, HIGH);
  pinMode(RL1powerPin, OUTPUT);

  digitalWrite(RL2powerPin, HIGH);
  pinMode(RL2powerPin, OUTPUT);
  
 
}

//--- VOID LOOP
void loop() {
 
  Read_Sensors();
  //HM_value == 75;
  Controlo();

  
 
}

//--- FIM VOID LOOP
