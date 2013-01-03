#ifndef LINE_H
#define LINE_H

#include "../lib/pixel.h"

class Line
{
    public:
        Line(int width);
        virtual ~Line();
        Pixel **list;
        Pixel* getPixel(int position);
    protected:
    private:
};

#endif // LINE_H
