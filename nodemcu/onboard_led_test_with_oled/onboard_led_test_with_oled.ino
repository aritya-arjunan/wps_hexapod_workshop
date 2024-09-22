#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <U8g2_for_Adafruit_GFX.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
#define SCREEN_ADDRESS 0x3C
#define LED 2

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
U8G2_FOR_ADAFRUIT_GFX u8g2_for_adafruit_gfx;

void init_display() {
  display.clearDisplay();
  display.setTextSize(1);  // Set text size to 2 (twice the original size)
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.println("Hi WPS students,");
  display.println("Welcome to the");
  display.println("Hexapod Workshop!");
  display.display();
  delay(2000);
}

void print(String text) {
  display.clearDisplay();
  display.setCursor(0, 0);
  display.println(text);
  display.display();
}

void setup() {
  pinMode(LED, OUTPUT);
  Wire.begin(14, 12);
  display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS);
  u8g2_for_adafruit_gfx.begin(display);
  init_display();
}

void loop() {
  // put your main code here, to run repeatedly:
  print("Turning on LED");
  digitalWrite(LED, LOW);
  delay(1500);
  print("Turning off LED");
  digitalWrite(LED, HIGH);
  delay(1500);
}