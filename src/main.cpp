
#include <GL/glut.h>

#include "Constant.hpp"

int winx = 100, winy = 100;
int GameStatus = GAME_STATUS_NEW;
int KeyDirection = GAME_KEY_NULL;

/**
 * Function will draw the game zone border. Default color is white
 */
void drawGameZoneBorder(void) {
	GLint x = GAME_ZONE_X, y = GAME_ZONE_Y;
	glColor3f(1.0, 1.0, 1.0); //Border Color
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glVertex2i(x, y);
	glVertex2i(x + GAME_ZONE_WIDTH, y);
	glVertex2i(x + GAME_ZONE_WIDTH, y);
	glVertex2i(x + GAME_ZONE_WIDTH, y + GAME_ZONE_HEIGHT);
	glVertex2i(x + GAME_ZONE_WIDTH, y + GAME_ZONE_HEIGHT);
	glVertex2i(x, y + GAME_ZONE_HEIGHT);
	glVertex2i(x, y + GAME_ZONE_HEIGHT);
	glVertex2i(x, y);
	glEnd();
}


/**
 * Function will set the windows to the center of the screen according screen resolution
 * if screen_height or screen_width means the resolution cannot get correctly, then the
 * function will not change the default value for window create position
 * @param screen_height
 * 			the height of the current screen, 0 means resolution unavailable
 * @param screen_width
 * 			the width of the current screen, 0 means resolution unavailable
 */
void centerwindow(int screen_height, int screen_width) {
	if (screen_height != 0 && screen_width != 0) {
		winx = screen_width / 2 - WIN_WIDTH / 2;
		winy = screen_height / 2 - WIN_HEIGHT / 2;
	}
}

void keyFunc(unsigned char key, int x, int y) {
	if (GameStatus == GAME_STATUS_NEW) {

	}
}

void specialFunc(int key, int x, int y) {

}
/**
 * Display function
 */
void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	drawGameZoneBorder();
	glFlush();
	glutSwapBuffers();
	glutPostRedisplay();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	centerwindow(glutGet(GLUT_SCREEN_HEIGHT), glutGet(GLUT_SCREEN_WIDTH));
	glutInitWindowPosition(winx, winy);
	glutInitWindowSize(WIN_WIDTH, WIN_HEIGHT);
	glutCreateWindow(WIN_TITLE);
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, WIN_WIDTH, 0.0, WIN_HEIGHT);

	glutKeyboardFunc(keyFunc);
	glutSpecialFunc (specialFunc);
	glutDisplayFunc(display);
	glutMainLoop();




	return 0;
}
