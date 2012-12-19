#include <iostream>
#include <stdio.h>
#include <fstream>
#include "bmp.h"

#define print(value) cout<<value<<endl;

using namespace std;

int main()
{
    Bmp *image1 = new Bmp();
    Png *image2 = new Png();
    Tif *image3 = new Tif();

    //image1->loadBmp("test.bmp");
    image1->createBmp(4*15,4*20); //empty image
    image1->saveBmp("image_created.bmp");

    return 0;
}
