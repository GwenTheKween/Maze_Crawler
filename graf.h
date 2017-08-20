#ifndef GRAFIC_LIB
#include <GL/glut.h>
#include <SOIL.h>
#include "position.h"

#define GRAFIC_LIB

#define HEIGHT 1200
#define WIDTH 900

class button{
private:
	int type;
	position top_left,bottom_right;
	GLuint tex;
public:
	button();
	~button();
	void set(int,int,int,int,int);
	bool click(int x,int y);
	void draw();
};

int h();

int w();

void reshape(GLsizei,GLsizei);

void timer(int);

inline void render(){
	glutSwapBuffers();
}

void screen_start(int*,char**);

void screen_set(void (*display)(void),void (*key)(unsigned char,int,int),void (*mouse)(int,int,int,int));

unsigned int load_texture(const char*);

#endif
