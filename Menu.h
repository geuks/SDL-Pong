#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#pragma once

#include <SDL2\SDL_ttf.h>

typedef struct menu{
        SDL_Rect Name_Rect;
        SDL_Surface *Name_Surface;
        SDL_Rect Jouer_Rect;
        SDL_Surface *Jouer_Surface;
        SDL_bool Jouer_isHovered;
        SDL_Rect Quitter_Rect;
        SDL_Surface *Quitter_Surface;
        SDL_bool Quitter_isHovered;
        TTF_Font *font1;
}menu;

#endif // MENU_H_INCLUDED

