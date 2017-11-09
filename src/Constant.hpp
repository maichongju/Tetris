#ifndef SRC_CONSTANT_HPP_
#define SRC_CONSTANT_HPP_

#define length(a) sizeof(a)/sizeof(a[0])

// Windows Size
#define WIN_WIDTH				700
#define WIN_HEIGHT				1050
#define WIN_TITLE				"Tetris"

// Game Zone Start Position
#define GAME_ZONE_X				25
#define GAME_ZONE_Y				23

// Block Size
#define GAME_BLOCK_SIZE			50

//Game Zone Size
#define GAME_ZONE_WIDTH			500
#define GAME_ZONE_HEIGHT		1000

// Game Status
#define GAME_STATUS_NEW			0
#define GAME_STATUS_RUNNING 	1
#define GAME_STATUS_END			2
#define GAME_STATUS_PAUSE		3

// Game Key
#define GAME_KEY_NULL			0
#define GAME_KEY_LEFT			1
#define GAME_KEY_RIGHT			2



#endif /* SRC_CONSTANT_HPP_ */
