#include "imagebmp.h"

ImageBmp::ImageBmp(int width,int height)
{
    list = new Line*[height];
    for(int i=0;i<height;i++){
        list[i] = new Line(width);
    }
}

ImageBmp::~ImageBmp()
{
    //dtor
}


Line* ImageBmp::getLine(int lineNumber){
    return list[lineNumber];
}
