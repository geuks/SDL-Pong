#include "Game.h"

/* *********************************************************************************
	 *_____BUT:Initialise les valeurs d'un SDL_Rect donnée en paramètre
	 *__ENTREE:une variable de type SDL_Rect, 4 entier
	 *__SORTIE:
***********************************************************************************/
void setRect(SDL_Rect *t,int h,int w,int x,int y){
        t->h=h;
        t->w=w;
        t->x=x;
        t->y=y;
};


/* *********************************************************************************
	 *_____BUT:Initialise les valeurs d'une variable de type pos donnée en paramètre
	 *__ENTREE:une variable de type pos, 2 entiers
	 *__SORTIE:
***********************************************************************************/
void setPos(pos *position,int x,int y){
        position->X = x;
        position->Y = y;
}
