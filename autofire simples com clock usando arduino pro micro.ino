// quando o pino digital 16 é acionado por um botão o arduino dispara repetidamente clicando no botão esquerdo do mouse

#include <Mouse.h>



boolean isPressed = false;


int pinBotao = 16;

void setup() {
pinMode(pinBotao, INPUT_PULLUP);
digitalWrite(pinBotao, LOW);
 

}

void loop() {
label:
Mouse.release(MOUSE_LEFT);


if (digitalRead(pinBotao) == HIGH){
  isPressed = true;
} else{
  isPressed == false;
}

  

if (isPressed == true)
{

Mouse.click(MOUSE_LEFT);
delay(20);

Mouse.move(0, 1); delay(20);
Mouse.click(MOUSE_LEFT);
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}


}

}
