#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#pragma once

#include "Player.h"
#include "Ball.h"
#include "Map.h"
#include "Menu.h"
#include "ObjectPos.h"
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>
#include <SDL2\SDL.h>
#include <SDL2\SDL2_gfxPrimitives.h>
#include <SDL2\SDL_ttf.h>

#define NOM_JEU "Pong"
#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 780

#define FONT1 "retganon.ttf"
#define FONT_SIZE 200

#define NAME "Pong"     //Pour l'affichage du menu
#define JOUER "Jouer"  //Pour l'affichage du menu
#define QUITTER "Quitter"        //Pour l'affichage du menu
#define MENU_HEIGHT 70
#define MENU_WIDTH 180
#define MENU_NAME_HEIGHT 130
#define MENU_NAME_SIZE_WIDTH 300
#define MENU_NAME_SIZE_HEIGHT 100
#define DECALLAGE_MENU 90

#define SCORE_HEIGHT 100
#define SCORE_WIDTH 50
#define SCORE_X SCREEN_WIDTH/2
#define SCORE_Y 100
#define SCORE_DECALAGE 150

#define PLAYER 0
#define IA 1
#define MAXPLAYER 2

#define RACKET_WIDTH 15
#define RACKET_HEIGHT 100

#define MARGE_ERREUR 0.05

#define BALL 2
#define BALL_SIZE 16
#define BALL_START_RIGHT (SCREEN_WIDTH/MIN2)-40
#define BALL_START_LEFT (SCREEN_WIDTH/MIN2)+40
#define DECALLAGE_BALL 100

#define LINE_SIZE 5
#define DECALLAGE_LINE 30

#define MIN0 0.0
#define MIN1 1.0
#define MIN2 2.0
#define MIN3 3.0
#define MAXIMAGEPS 16   //1/60(FPS) * 1000 = 16.6

#define RGBA_MAX 255
#define RGBA_MIN 0
#define RGBA_GRAY 32

#define SPEEDPLAYER 4
#define SPEEDX 6
#define SPEEDY 6

#define SECOND 2000

typedef struct game{
        SDL_Window *Window;
        SDL_Renderer *Renderer;
        SDL_Texture *Texture;
        SDL_Rect Rect;
        SDL_Surface *Surface;
        SDL_bool Restart;
        SDL_bool CanLaunch;
        SDL_Color Color;
        menu Menu;
        player Player[MAXPLAYER];
        ball Ball;
        mapDecor Map;
}game;

typedef enum directionHorizontal{
        RIGHT,LEFT
}directionHorizontal;

typedef enum directionVertical{
        UP,DOWN
}directionVertical;

typedef struct gameState{
        int Running;
        directionHorizontal SensHozirontal;
        directionVertical SensVertical;
}gameState;



//PROTOTYPES
extern int gameInit(char*,int,int,int,int,int,game*,TTF_Font**);
extern void gameDestroy(game*);
extern void gameHandleEvents(gameState*,pos[]);
extern void gameDelay(unsigned int);
extern void renderPlayersAndBall(game*,pos[]);
extern void renderMap(game*);
extern void updateEvents(game*,SDL_bool[],gameState*,pos*);
extern void updateMovement(SDL_bool[],pos[],gameState*,ball);
extern void initPositions(game*,pos[],gameState*);
extern void checkState(game*,gameState*,SDL_bool*);
extern void launchGame(game*,gameState*,pos[],pos*,SDL_bool*);
extern void launchMenu(game*,pos*);
extern void renderMenu(game*,SDL_Surface*,SDL_Rect,int);
extern SDL_bool isHoverButton(SDL_Rect,pos);
extern int checkTime(unsigned int*,unsigned int*);
extern void normalize(double*,double,double);
extern void reverseNb(double*,double,double) ;
extern void renderRect(SDL_Renderer *r, SDL_Rect *rect);

#endif // GAME_H_INCLUDED
