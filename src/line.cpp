#include "line.h"

Line::Line(int width)
{
    list = new Pixel*[width];
    for(int i=0;i<width;i++){
        list[i] = new Pixel();
    }
}

Line::~Line()
{
    //dtor
}

Pixel* Line::getPixel(int position){
  return list[position];
}
