#ifndef BMP_H
#define BMP_H

#include <iostream>
#include <string>
#include <fstream>
#include "../lib/headerbmp.h"
#include "../lib/imagebmp.h"
#include "../lib/Image.h"

using namespace std;

class Bmp : public Image
{
public:
  Bmp();
  virtual ~Bmp();
  HeaderBmp* getHeader();
  ImageBmp* getImage();
  bool load(string filename);
  bool save(string filename);
  void create(int width,int height);
private:
  HeaderBmp* header;
  ImageBmp* img;
};

#endif // BMP_H
