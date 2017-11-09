
#ifndef SRC_WORLD_HPP_
#define SRC_WORLD_HPP_

#include "Constant.hpp"
#include "Block.hpp"

extern int GameStatus, KeyDirection, Score, HighScore;


class World {
public:
	World();
	void draw();
	void reset();
private:
	Block_I b;
};




#endif /* SRC_WORLD_HPP_ */
