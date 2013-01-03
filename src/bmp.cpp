#include "../lib/bmp.h"

#define print(value) std::cout<<value<<std::endl;

Bmp::Bmp(){
  header = new HeaderBmp();
  //img = new ImageBmp();
}

Bmp::~Bmp(){
	delete[] header;
	delete[] img;
}

HeaderBmp* Bmp::getHeader(){
	return header;
}

ImageBmp* Bmp::getImage(){
	return img;
}

bool Bmp::load(string filename){
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

    header->audit(); //control header
    print("\tImage caracteristics : ");
    cout<<"\t\tsize : "<<header->width <<"x"<< header->height<<endl;
    cout<<"\t\tbpp : "<<header->bitPerPixel<<endl;

    //IMAGE BMP
    img = new ImageBmp(header->width,header->height);
    file.seekg(header->fileOffset);//begin of image
    int red, green, blue;
    for(unsigned int i=0;i<header->height;i++){
        for(unsigned int j=0;j<header->width;j++){
        	blue = file.get();
        	green = file.get();
        	red = file.get();
            img->getLine(i)->getPixel(j)->setBlue(blue);
            img->getLine(i)->getPixel(j)->setGreen(green);
            img->getLine(i)->getPixel(j)->setRed(red);
            img->getLine(i)->getPixel(j)->setRGB(red,green,blue);
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

void Bmp::create(int width,int height){
    header->setHeader(width,height);
    img = new ImageBmp(width,height);
    for (unsigned int i=0;i<header->width;i++){
    	print(img->getLine(0)->getPixel(i)->getRed());
    	print(img->getLine(0)->getPixel(i)->getGreen());
    	print(img->getLine(0)->getPixel(i)->getBlue());
    }
}

bool Bmp::save(string filename){
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
    for(unsigned int i=0;i<header->height;i++){
        for(unsigned int j=0;j<header->width;j++){
            rgb[0] = (char) img->getLine(i)->getPixel(j)->getBlue();
            rgb[1] = (char) img->getLine(i)->getPixel(j)->getGreen();
            rgb[2] = (char) img->getLine(i)->getPixel(j)->getRed();
            file.write(rgb,3);
        }
    }

    file.close();
  }else{
    print("Warning, unable to save the file");
    return false;
  }
  print("image saved!\n");
  return true;
}
