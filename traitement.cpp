#include "traitement.h"

void moyenne(Bmp* image){ //mettre en argument Image* pour généraliser
	cout<<"image processing..."<<endl;
	ImageBmp* img = image->getImage(); //à changer en Img*
	HeaderBmp* head = image->getHeader();
	int width = head->width;
	int height = head->height;
	int size = head->imageSize;

	//put image in buffers
	int rgb[size], r[size], g[size], b[size];
	int cmpt=0;
	for(int i=0;i<height;i++){
		for(int j=0;j<width;j++){
			rgb[cmpt] = img->getLine(i)->getPixel(j)->getRGB();
			r[cmpt] = img->getLine(i)->getPixel(j)->getRed();
			g[cmpt] = img->getLine(i)->getPixel(j)->getGreen();
			b[cmpt] = img->getLine(i)->getPixel(j)->getBlue();
			cmpt++;
		}
	}
	cmpt=0;

	//ranger buffer lineaire dans une matrice
	//cela est plus adapter pour le traitement d'images

	//modification of values width=2 height=3 j={0,1,2}  i={0,1,2} rgb[6]
	for(int i=0;i<height;i++){
		for(int j=0;j<width;j++){
			rgb[cmpt] = rgb[] + rgb[]; 0 1 2 1
			rgb[i] = rgb[] / 2;
			cmpt++;
		}
	}
}
