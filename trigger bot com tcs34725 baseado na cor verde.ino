//nesse exemplo o sensor de cor tcs3472 usa a variação da cor verde para disparar o botão esquerdo do mouse
//isso pode ser utilizado em combinação com outras cores

#include "TCS34725.h"
#include <Mouse.h>
boolean isPressed = false;
TCS34725 tcs;
int pinBotao = 16;

    int marcador = 0;
    int verde = 0;

void setup(void)
{
    Serial.begin(115200);
    pinMode(pinBotao, INPUT_PULLUP);
    digitalWrite(pinBotao, LOW);

    Wire.begin();
    if (!tcs.attach(Wire))
        Serial.println("ERROR: TCS34725 NOT FOUND !!!");

    tcs.integrationTime(15); // ms

    // set LEDs...
    analogWrite(A0, LOW);


}

void loop(void)
{
 

   while(digitalRead(pinBotao) == HIGH){
       
    if (tcs.available()) // if current measurement has done
    {
        TCS34725::Color color = tcs.color();
        if (marcador == 0){
        verde = color.g;
        marcador++;  
       }
        int verde2 = color.g;
       // Serial.print("Red: "); Serial.print(color.r);
      //  Serial.print(" Green: "); Serial.print(color.g);
       // Serial.print(" Blue: "); Serial.println(color.b);  
        
       
          
          Serial.print(" Green: "); Serial.print(verde2);
          Serial.print(" CONSTANTE: "); Serial.println(verde);
          if(verde != verde2){

           Mouse.click(MOUSE_LEFT);
          delay(1000);
            
          }     
      
        }            
    }
    marcador = 0;
}
