#include "../lib/pixel.h"

Pixel::Pixel(){
    red = 0;
    green = 0;
    blue = 0;
    rgb = 0;
}

Pixel::~Pixel(){
}

int Pixel::getRed(){
  return red;
}

int Pixel::getGreen(){
  return green;
}

int Pixel::getBlue(){
  return blue;
}

int Pixel::getRGB(){
  return rgb;
}

void Pixel::setRed(int value){
  red = value;
}

void Pixel::setGreen(int value){
  green = value;
}

void Pixel::setBlue(int value){
  blue = value;
}

void Pixel::setRGB(int value){
  rgb = value;
}

void Pixel::setRGB(int red, int green, int blue){
  rgb = (red<<16)+(green<<8)+blue;
}
