#ifndef PIXEL_H
#define PIXEL_H



class Pixel
{
    public:
        Pixel();
        virtual ~Pixel();
        int red;
        int green;
        int blue;
        int getRed();
        int getBlue();
        int getGreen();
        void setRed(int value);
        void setBlue(int value);
        void setGreen(int value);
    protected:
    private:
};

#endif // PIXEL_H
