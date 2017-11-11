#ifndef SRC_NEXT_HPP_
#define SRC_NEXT_HPP_

#include <GL/glut.h>
#include <time.h>
#include <iostream>
#include <stdlib.h>
#include "Constant.hpp"
#include "Block.hpp"

using namespace std;

class Next {
public:
	Next();
	void draw();
	int getNext();
private:
	int next;
	Block *block[7];
	void setPosition();

};



#endif
