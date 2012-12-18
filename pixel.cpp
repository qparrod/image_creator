#include "pixel.h"

Pixel::Pixel(){
    red=0;
    green=0;
    blue=0;
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

void Pixel::setRed(int value){
  red = value;
}

void Pixel::setGreen(int value){
  green = value;
}

void Pixel::setBlue(int value){
  blue = value;
}

