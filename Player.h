#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#pragma once

#include<SDL2\SDL.h>

#define SCORE_MAX 2

typedef struct player{
        SDL_Rect Rect;
        double centre;
        int Score;
        SDL_Rect Score_Rect;
        SDL_Surface *Score_Surface;
}player;


#endif // PLAYER_H_INCLUDED
