#ifndef SRC_BLOCK_HPP_
#define SRC_BLOCK_HPP_

#include <GL/glut.h>
#include "Constant.hpp"
#include "Color.hpp"

//http://tetris.wikia.com/wiki/Tetrimino
class Position {
public:
	int x, y;
	Position();
	Position(int x, int y);
	void set(int x, int y);
};

class Block {
public:
	virtual ~Block();
	virtual void draw(void)=0;
	virtual void rotation(int direction)=0;
	virtual void reset() = 0;
	Position *plist[4];
protected:
	Color color, outlineColor;
	void drawOutline(int x, int y, int size, Color color);

};

class Block_I: public Block {
public:
	Block_I();
	void draw(void);
	void rotation(int direction);
	void reset();
};

class Block_O: public Block {
public:
	Block_O();
	~Block_O();
	void draw(void);
	void rotation(int direction);
	void reset();

};
class Block_T: public Block {
public:
	Block_T();
	~Block_T();
	void draw(void);
	void rotation(int direction);
	void reset();

};
class Block_S: public Block {
public:
	~Block_S();
	Block_S();
	void draw(void);
	void rotation(int direction);
	void reset();

};
class Block_Z: public Block {
public:
	Block_Z();
	~Block_Z();
	void draw(void);
	void rotation(int direction);
	void reset();

};

class Block_J: public Block {
public:
	Block_J();
	~Block_J();
	void draw(void);
	void rotation(int direction);
	void reset();

};

class Block_L: public Block {
public:
	Block_L();
	~Block_L();
	void draw(void);
	void rotation(int direction);
	void reset();

};

#endif /* SRC_BLOCK_HPP_ */
