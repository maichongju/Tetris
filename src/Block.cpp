
#include "Block.hpp"

//================================================================
// Position Class
Position::Position() {
	this->x = 0;
	this->y = 0;
}

Position::Position(int x, int y) {
	this->x = x;
	this->y = y;
}
void Position::set(int x, int y) {
	this->x = x;
	this->y = y;
}

//===============================================================
// Block Class
void Block::drawOutline(int x, int y, int size, Color color) {
	glColor3f(color.red, color.green, color.blue);
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glVertex2i(x, y);
	glVertex2i(x + size, y);
	glVertex2i(x + size, y);
	glVertex2i(x + size, y + size);
	glVertex2i(x + size, y + size);
	glVertex2i(x, y + size);
	glVertex2i(x, y + size);
	glVertex2i(x, y);
	glEnd();
}
Block::~Block() {

}



//================================================================
// Block_I Class
Block_I::Block_I() {
	this->plist[0] = new Position(GAME_ZONE_WIDTH / 2,
			GAME_ZONE_HEIGHT + GAME_ZONE_Y);
	this->plist[1] = new Position(GAME_ZONE_WIDTH / 2,
			2 * GAME_ZONE_HEIGHT + GAME_ZONE_Y);
	this->plist[2] = new Position(GAME_ZONE_WIDTH / 2,
			3 * GAME_ZONE_HEIGHT + GAME_ZONE_Y);
	this->plist[3] = new Position(GAME_ZONE_WIDTH / 2,
			4 * GAME_ZONE_HEIGHT + GAME_ZONE_Y);
	this->outlineColor.setColor(0, 0, 0, 1);
	this->color.setColor(0, 1, 1, 1);
}

void Block_I::draw() {
	int i;
	glColor3f(color.red, color.green, color.blue);
	for (i = 0; i < 4; i++) {
		glRecti(this->plist[i]->x, this->plist[i]->y,
				this->plist[i]->x + GAME_BLOCK_SIZE,
				this->plist[i]->y + GAME_BLOCK_SIZE);
	}
}
void Block_I::reset() {
	this->plist[0]->set(GAME_ZONE_WIDTH / 2,
	GAME_ZONE_HEIGHT + GAME_ZONE_Y);
	this->plist[1]->set(GAME_ZONE_WIDTH / 2,
			2 * GAME_ZONE_HEIGHT + GAME_ZONE_Y);
	this->plist[2]->set(GAME_ZONE_WIDTH / 2,
			3 * GAME_ZONE_HEIGHT + GAME_ZONE_Y);
	this->plist[3]->set(GAME_ZONE_WIDTH / 2,
			4 * GAME_ZONE_HEIGHT + GAME_ZONE_Y);
}
void Block_I::rotation(int diraction) {

}

