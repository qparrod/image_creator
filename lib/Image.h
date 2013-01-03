#ifndef IMAGE_H_
#define IMAGE_H_

#include <iostream>
#include <string>

using namespace std;

class Image {
public:
	Image();
	virtual ~Image();
	bool isBmp();
	bool isTiff();
	bool isPng();
	//virtual Header getHeader();
	virtual bool load(string filename); //charge une image quelconque. Methode definie
						//dans chaque classe dérivées
};

#endif /* IMAGE_H_ */
