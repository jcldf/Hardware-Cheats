//prova de conceito utilizando arduino + usb host shield para fazer um controle de recuo na ak47
#include <hidboot.h>
#include <usbhub.h>
#include <Mouse.h>

// Satisfy the IDE, which needs to see the include statment in the ino too.
#ifdef dobogusinclude
#include <spi4teensy3.h>
#endif
#include <SPI.h>

boolean isPressed = false;

class MouseRptParser : public MouseReportParser
{
protected:
	void OnMouseMove	(MOUSEINFO *mi);
	void OnLeftButtonUp	(MOUSEINFO *mi);
	void OnLeftButtonDown	(MOUSEINFO *mi);
	void OnRightButtonUp	(MOUSEINFO *mi);
	void OnRightButtonDown	(MOUSEINFO *mi);
	void OnMiddleButtonUp	(MOUSEINFO *mi);
	void OnMiddleButtonDown	(MOUSEINFO *mi);
};
void MouseRptParser::OnMouseMove(MOUSEINFO *mi)
{
    Serial.print("dx=");
    Serial.print(mi->dX, DEC);
    Serial.print(" dy=");
    Serial.println(mi->dY, DEC);
    int x = (x + mi->dX);
    int y = (y + mi->dY);
    Mouse.move(x, y, 0);
    
};
void MouseRptParser::OnLeftButtonUp	(MOUSEINFO *mi)
{
    Serial.println("L Butt Up");
    isPressed = false;
};
void MouseRptParser::OnLeftButtonDown	(MOUSEINFO *mi)
{
    Serial.println("L Butt Dn");
    isPressed = true;
};
void MouseRptParser::OnRightButtonUp	(MOUSEINFO *mi)
{
    Serial.println("R Butt Up");
};
void MouseRptParser::OnRightButtonDown	(MOUSEINFO *mi)
{
    Serial.println("R Butt Dn");
};
void MouseRptParser::OnMiddleButtonUp	(MOUSEINFO *mi)
{
    Serial.println("M Butt Up");
};
void MouseRptParser::OnMiddleButtonDown	(MOUSEINFO *mi)
{
    Serial.println("M Butt Dn");
};


USB     Usb;
USBHub     Hub(&Usb);
HIDBoot<USB_HID_PROTOCOL_MOUSE>    HidMouse(&Usb);

MouseRptParser                               Prs;

void setup()
{
    Serial.begin( 115200 );
#if !defined(__MIPSEL__)
  // while (!Serial); // Wait for serial port to connect - used on Leonardo, Teensy and other boards with built-in USB CDC serial connection //EDITADO PARA RODAR SEM O SERIAL MONITOR
#endif
   Serial.println("Start");

   if (Usb.Init() == -1)
        Serial.println("OSC did not start.");

    delay( 200 );

    HidMouse.SetReportParser(0, &Prs);
    Mouse.begin();
}

void loop()
{
  
  
Usb.Task();

label:
Mouse.release(MOUSE_LEFT);


//if (Mouse.isPressed(MOUSE_LEFT) == true){
//  isPressed = true;
//} else{
//  isPressed = false;
//} 

if (isPressed == true)
{

Mouse.press(MOUSE_LEFT);
delay(100);

Mouse.move(-2, 19); delay(95);
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}
Mouse.move(1, 27); delay(95);
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(2, 27); delay(95);
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(4, 26); delay(95);
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(5, 27); delay(95);
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(5, 27); delay(95);
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(2, 29); delay(95); // era 25
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(-10, 29); delay(95); // era 25
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(-20, 10); delay(95); // era 5
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(-15, 3); delay(95);
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(-10, 4); delay(95);
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(-10, 2); delay(95);
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(-6, 2); delay(95);
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(4, 2); delay(95);
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(14, 3); delay(95);
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(20, 3); delay(95);
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(20, 3); delay(95);
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(19, 2); delay(95);
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(12, -2); delay(95);
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(2, -2); delay(95);
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(-2, 2); delay(95);
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(-2, 4); delay(95);
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(3, 2); delay(95); // 3
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(3, 2); delay(95); // 3
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(-3, 0); delay(95);// -3
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(-15, -2); delay(95); // era 12
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(-44, -5); delay(95); // era 20
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(-28, -7); delay(95); // era 24
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}

Mouse.move(-29, -8); delay(95); // era 29
Usb.Task();
if (isPressed == false){
  isPressed = false;
  goto label;
}


}

  
}
