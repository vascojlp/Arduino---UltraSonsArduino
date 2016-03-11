void Controlo() {

//Teste Controlo Humidade no arranque

Serial.print(HM_value);
delay(1000);

    //Valor manual do HMMin_value
    
      if (HM_value < HMMin_value && currentMillis <= 20000) {     //3600000 = 1 hora
      Serial.print("humidade em modo automatico inicial");

      digitalWrite(RL1powerPin, LOW);
      digitalWrite(RL2powerPin, LOW);
      delay(60000);
      currentMillis = millis();
      digitalWrite(RL1powerPin, HIGH);
      delay(10000);
      digitalWrite(RL2powerPin, HIGH);
      delay(500);
    } else {
      digitalWrite(RL1powerPin, HIGH);
      digitalWrite(RL2powerPin, HIGH);
      delay(500);
    }

//Controlo Humidade
    //Valor manual do HMMin_value    
    if (HM_value < HMMin_value && currentMillis + 300000 <= millis() ) {
      
      digitalWrite(RL1powerPin, LOW);
      digitalWrite(RL2powerPin, LOW);
      delay(60000);               // 5 minutos
      Serial.print("humidade em modo automatico inicial");
      Serial.print("ligou reles");
      currentMillis = millis();
      digitalWrite(RL1powerPin, HIGH);
      delay(10000);
      digitalWrite(RL2powerPin, HIGH);
      delay(1000);
      Serial.print("desligou reles");

    }
    else {
      digitalWrite(RL1powerPin, HIGH);
      digitalWrite(RL2powerPin, HIGH);
    }
   
    
    

  
}











