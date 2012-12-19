#include "headerbmp.h"
#include <iostream>
#include <stdio.h>h"

#define print(value) cout<<value<<endl;

using namespace std;

HeaderBmp::HeaderBmp(){
  signature           = 19778; //BM : bitmap windows
  reserved            = 0;
  fileOffset          = 54; //header sizee (total)
  headerSize          = 40; //bmp header size (0x28)
  planes              = 1;
  bitPerPixel         = 8; //MORE FLEXIBLE!
  compression         = 0;
  xPixelsPerMeter     = 2835;
  yPixelsPerMeter     = 2835;
  colorsInColorTable  = 0;
  importantColorCount = 0;
}

HeaderBmp::~HeaderBmp(){}

void HeaderBmp::setHeader(int w,int h){
  width     = w;
  height    = h;
  imageSize = width * height * bitPerPixel / 8;
  fileSize  = fileOffset + imageSize;
}

void HeaderBmp::audit(){
    cout<<"signature : ";
    print(signature);
    cout<<"reserved : ";
    print(reserved);
    cout<<"fileOffset : ";
    print(fileOffset);
    cout<<"headerSize : ";
    print(headerSize);
    cout<<"planes : ";
    print(planes);
    cout<<"bitPerPixel : ";
    print(bitPerPixel);
    cout<<"compression : ";
    print(compression);
    cout<<"width : ";
    print(width);
    cout<<"height : ";
    print(height);
    cout<<"imageSize : ";
    print(imageSize);
    cout<<"xPixelsPerMeter : ";
    print(xPixelsPerMeter);
    cout<<"yPixelsPerMeter : ";
    print(yPixelsPerMeter);
    cout<<"colorsInColorTable : ";
    print(colorsInColorTable);
    cout<<"importantColorCount : ";
    print(importantColorCount);
}
