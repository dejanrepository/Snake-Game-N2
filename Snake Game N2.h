#pragma once

#include "resource.h"

#define GAME_RES_WIDTH 400  // Resolution
#define GAME_RES_HEIGHT 240 // Resolution 
#define BPP 32              // Bits Per Pixel

#define GAME_DRAWING_AREA_SIZE (GAME_RES_WIDTH * (GAME_RES_HEIGHT * BPP/8))


void ProcessPlayerInput(void);
void RenderFrameGraphics(void);
typedef struct GAMEBITMAP
{
	BITMAPINFO BitmapInfo;
	
	void* Memory;
}GAMEBITMAP;
