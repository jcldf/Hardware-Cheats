// controle de recuo usando a ak47 no pino 16 do arduino, quando o botão do pino 16 acionado

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

Mouse.press(MOUSE_LEFT);
delay(100);

Mouse.move(-2, 19); delay(95);
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}
Mouse.move(1, 27); delay(95);
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(2, 27); delay(95);
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(4, 26); delay(95);
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(5, 27); delay(95);
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(5, 27); delay(95);
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(2, 29); delay(95); // era 25
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(-10, 29); delay(95); // era 25
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(-20, 10); delay(95); // era 5
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(-15, 3); delay(95);
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(-10, 4); delay(95);
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(-10, 2); delay(95);
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(-6, 2); delay(95);
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(4, 2); delay(95);
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(14, 3); delay(95);
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(20, 3); delay(95);
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(20, 3); delay(95);
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(19, 2); delay(95);
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(12, -2); delay(95);
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(2, -2); delay(95);
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(-2, 2); delay(95);
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(-2, 4); delay(95);
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(3, 2); delay(95); // 3
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(3, 2); delay(95); // 3
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(-3, 0); delay(95);// -3
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(-15, -2); delay(95); // era 12
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(-44, -5); delay(95); // era 20
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(-28, -7); delay(95); // era 24
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}

Mouse.move(-29, -8); delay(95); // era 29
if (digitalRead(pinBotao) == LOW){
  isPressed = false;
  goto label;
}


}

}
