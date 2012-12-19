#ifndef BMP_H
#define BMP_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <fstream>
#include "HeaderBmp.h"
#include "ImageBmp.h"

using namespace std;

class Bmp
{
public:
  Bmp();
  virtual ~Bmp();
  bool loadBmp(string filename);
  bool saveBmp(string filename);
  void createBmp(int width,int height);
private:
  HeaderBmp *header;
  ImageBmp *img;
};



#endif // BMP_H
