#ifndef PIXEL_H
#define PIXEL_H

class Pixel
{
    public:
        Pixel();
        virtual ~Pixel();
        int getRed();
        int getBlue();
        int getGreen();
        int getRGB();
        void setRed(int value);
        void setBlue(int value);
        void setGreen(int value);
        void setRGB(int value);
        void setRGB(int red, int green, int blue);
    private:
        int red;
        int green;
        int blue;
        int rgb;
};

#endif // PIXEL_H
