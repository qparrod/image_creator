#ifndef IMAGEBMP_H
#define IMAGEBMP_H

#include "Line.h"

class ImageBmp
{
public:
  ImageBmp(int width,int height);
  virtual ~ImageBmp();
  Line **list;
  int t_size;
  Line* getLine(int lineNumber);
};

#endif // IMAGEBMP_H
