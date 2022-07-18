// utilização da pixy2 para identificar cores e acionar o botão esquerdo do mouse
#include <Pixy2.h>

#include <SPI.h>

#include <Mouse.h>

// This is the main Pixy object 
Pixy2 pixy;

void setup() {
  Serial.begin(115200);
  Serial.print("Starting...\n");
  Mouse.begin();
  pixy.init();
}

void loop() {
  int i;
  // grab blocks!
  pixy.ccc.getBlocks();

  // If there are detect blocks, print them!
  if (pixy.ccc.numBlocks) {
    Serial.print("Detected ");
    Serial.println(pixy.ccc.numBlocks);
    for (i = 0; i < pixy.ccc.numBlocks; i++) {
      Serial.print("  block ");
      Serial.print(i);
      Serial.print(": ");
      //pixy.ccc.blocks[i].print();
      int width = pixy.ccc.blocks[i].m_x;
      int height = pixy.ccc.blocks[i].m_y;
      Serial.print(width);
      Serial.print(" ");
      Serial.println(height);
      //int x = map(width, 157, -157, 0, 315);
      //int y = map(height, 103, -103, 0, 207); 

      int x = map(width, 0, 315, -157, 157);
      int y = map(height, 0, 207, -103, 103);

      Serial.print(x);
      Serial.print(" ");
      Serial.println(y);
      Mouse.move(x, y);
      delay(1000);
    }
  }
}
