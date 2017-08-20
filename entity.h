#ifndef ENTITY
#define ENTITY
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "graf.h"
#include "mapa.h"

class entity{
private:
	position p;
	GLuint tex;
public:
	entity(int ,int );
	~entity();
	position pos(){return p;}
	void draw();
	bool colision(entity);
	void move(int);
	void load_tex(const char* = NULL);
	void clear_tex();
};

class player:public entity{
public:
	player(int);
	~player();
	void move(int,mapa);
	void load_tex();
	bool win(int,int);
};

#endif
