#ifndef OBJECTPOS_H_INCLUDED
#define OBJECTPOS_H_INCLUDED
#pragma once

#include<SDL2\SDL.h>

typedef struct pos{
        double X;
        double Y;
}pos;

//PROTOTYPES
extern void setRect(SDL_Rect*,int,int,int,int);
extern void setPos(pos*,int,int);
#endif // OBJECTPOS_H_INCLUDED
