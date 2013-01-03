#ifndef IMAGEBMP_H
#define IMAGEBMP_H

#include "../lib/line.h"

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
