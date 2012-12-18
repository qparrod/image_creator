#include "bmp.h"
#include <vector>

#define print(value) std::cout<<value<<std::endl;

Bmp::Bmp(){
  header = new HeaderBmp();
  //img = new ImageBmp();
}

Bmp::~Bmp(){
}

bool Bmp::loadBmp(string filename){
  print("loading picture...");
  ifstream file ( filename.c_str(), ios::in | ios::binary );
  if (file.is_open()){
    //READING HEADER
    file.read((char*)(&header->signature),2);
    file.read((char*)(&header->fileSize),4);
    file.read((char*)(&header->reserved),4);
    file.read((char*)(&header->fileOffset),4);
    file.read((char*)(&header->headerSize),4);
    file.read((char*)(&header->width),4);
    file.read((char*)(&header->height),4);
    file.read((char*)(&header->planes),2);
    file.read((char*)(&header->bitPerPixel),2);
    file.read((char*)(&header->compression),4);
    file.read((char*)(&header->imageSize),4);
    file.read((char*)(&header->xPixelsPerMeter),4);
    file.read((char*)(&header->yPixelsPerMeter),4);
    file.read((char*)(&header->colorsInColorTable),4);
    file.read((char*)(&header->importantColorCount),4);

    //header->audit(); //control header
    print("\tImage caracteristics : ");
    cout<<"\t\tsize : " <<header->width <<"x"<< header->height<<endl;
    cout<<"\t\tbpp : "<<header->bitPerPixel<<endl;

    //IMAGE BMP
    img = new ImageBmp(header->width,header->height);
    file.seekg(header->fileOffset);//begin of image
    for(int i=0;i<header->height;i++){
        for(int j=0;j<header->width;j++){
            img->getLine(i)->getPixel(j)->setBlue(file.get());
            img->getLine(i)->getPixel(j)->setGreen(file.get());
            img->getLine(i)->getPixel(j)->setRed(file.get());
        }
    }
    print("image loaded!\n");
  }
  else{
    print("Warning, unable to open the file\n");
    return false;
  }
  return true;
}

void Bmp::createBmp(int width,int height){
    header->setHeader(width,height);
    img = new ImageBmp(width,height);
}

bool Bmp::saveBmp(string filename){
  print("saving picture...");
  ofstream file (filename.c_str(), ios::out | ios::binary );
  if (file.is_open()){
    //WRITING HEADER
    file.write((char*)(&(header->signature)),2);
    file.write((char*)(&(header->fileSize)),4);
    file.write((char*)(&(header->reserved)),4);
    file.write((char*)(&(header->fileOffset)),4);
    file.write((char*)(&(header->headerSize)),4);
    file.write((char*)(&(header->width)),4);
    file.write((char*)(&(header->height)),4);
    file.write((char*)(&(header->planes)),2);
    file.write((char*)(&(header->bitPerPixel)),2);
    file.write((char*)(&(header->compression)),4);
    file.write((char*)(&(header->imageSize)),4);
    file.write((char*)(&(header->xPixelsPerMeter)),4);
    file.write((char*)(&(header->yPixelsPerMeter)),4);
    file.write((char*)(&(header->colorsInColorTable)),4);
    file.write((char*)(&(header->importantColorCount)),4);

    //WRITING IMAGE
    char rgb[3];
    for(int i=0;i<header->height;i++){
        for(int j=0;j<header->width;j++){
            rgb[0] = (char) img->getLine(i)->getPixel(j)->getBlue();
            rgb[1] = (char) img->getLine(i)->getPixel(j)->getGreen();
            rgb[2] = (char) img->getLine(i)->getPixel(j)->getRed();
            file.write(rgb,3);
        }
    }

    file.close();
  }else{
    print("Warning, unable to open the file");
    return false;
  }
  print("image saved!\n");
  return true;
}
