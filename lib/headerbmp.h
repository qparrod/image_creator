#ifndef HEADERBMP_H
#define HEADERBMP_H


class HeaderBmp{
public:
    HeaderBmp();
    virtual ~HeaderBmp();
    void setHeader(int width,int height);

    //BITMAP FILE HEADER
    unsigned short int signature;
    unsigned int fileSize;
    unsigned int reserved;
    unsigned int fileOffset;
    //HEADER BMP
    unsigned int headerSize;
    unsigned int width;
    unsigned int height;
    unsigned short int planes;
    unsigned short int bitPerPixel;
    unsigned int compression;
    unsigned int imageSize;
    unsigned int xPixelsPerMeter;
    unsigned int yPixelsPerMeter;
    unsigned int colorsInColorTable;
    unsigned int importantColorCount;
    //PALETTE
    unsigned int palette;

    void audit();
};

#endif // HEADERBMP_H
