#include "lib/bmp.h"
#include "lib/Image.h"
#include "traitement.h"
#include <iostream>
#include <string>

#define print(value) cout<<value<<endl;

using namespace std;

int main()
{
	Image *image = new Image();
	Bmp *img = new Bmp();

	image = img; //the image become a bitmap image

	if(image->load("img/bmp/test.bmp")){
		moyenne(img);
	}

    //Bmp *img = new Bmp();
    //Png *image2 = new Png();
    //Tif *image3 = new Tif();

    //image1->load("img/bmp/test.bmp");
    //img->create(4*25,4*30); //empty image
    //string extension = ".bmp";

    //string filename = "image_created3";
    //filename = filename + extension;
    //img->load("test.bmp");
    //img->save(filename);

	cout<<"end of program"<<endl;

    return 0;
}
