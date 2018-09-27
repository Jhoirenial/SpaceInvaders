#pragma once


/////////////////////////////////////////////////////
// Include
#include "renderSystem.h"


/////////////////////////////////////////////////////
// Constants
const int levelRows = screenRows;
const int levelColumns = screenColumns;

const float shipSpeed = 35.0;
const float shipFireCooldown = 0.2;

const float bulletSpeed = 40.0;

const float alienAmplitude = 7.0;
const float alienSpeed = 0.30;

const unsigned char CellSymbol_Ship		= 'S';
const unsigned char CellSymbol_Bullet	= '|';
const unsigned char CellSymbol_Alien	= 'X';
const unsigned char CellSymbol_Star  	= '.';

const unsigned char levelData0[levelRows][levelColumns + 1] = 
{
	"########################################################################",
	"#     XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX    #",
	"#       X  XXXX XX XXXXXXX  XXXXXXXXXXXXXXXXX  XXXXXXX XX XXXX  X      #",
	"#     XXXXXXXXX    X  X  X  X XX  XXXXX  XX X  X  X  X    XXXXXXXXX    #",
	"#          XXXX    X  X  X  XXXXX  XXX  XXXXX  X  X  X    XXX          #",
	"#          XXXX             X   XXXXXXXXX   X             XXX          #",
	"#          X  X                  XXXXXXX                  X X          #",
	"#                                XX X XX                               #",
	"#                                XX X XX                               #",
	"#                                X  X  X                               #",
	"#                                   X                                  #",
	"#                                                                      #",
	"#                                                                      #",
	"#                                                                      #",
	"#                                                                      #",
	"#                                                                      #",
	"#                                                                      #",
	"#                                                                      #",
	"#                                                                      #",
	"#                                                                      #",
	"#                                                                      #",
	"#                                                                      #",
	"#                                                                      #",
	"#                                  S                                   #",
	"########################################################################",
};
/*const unsigned char levelData0[levelRows][levelColumns + 1] =
{
	"   .                                                                    ",
	"                                                                        ",
	"                                                     .                  ",
	"             .                                                          ",
	"                              .                                     .   ",
	"                                                                        ",
	"                                                                        ",
	"                                                                        ",
	"                                          .                             ",
	"                .                                                       ",
	"                                                                 .      ",
	"                                                                        ",
	"                                                                        ",
	"                                                   .                    ",
	"                      .                                                 ",
	"                                                                        ",
	"                                                                      . ",
	"                                                  .                     ",
	"      .                           S                                     ",
	"                      .                                                 ",
	"                                                                        ",
	"                                                                        ",
};
*/




/////////////////////////////////////////////////////
// Functions
unsigned char GetRenderCellSymbol(unsigned char cellSymbol)
{
	switch (cellSymbol)
	{
		case CellSymbol_Ship:		return 202;
		case CellSymbol_Bullet:		return 179;
		case CellSymbol_Alien:		return 2;
		case CellSymbol_Star:		return 176;
	}
	return '?';
}

ConsoleColor GetRenderCellSymbolColor(unsigned char cellSymbol)
{
	switch (cellSymbol)
	{
		case CellSymbol_Ship:		return ConsoleColor_White;
		case CellSymbol_Bullet:		return ConsoleColor_Red;
		case CellSymbol_Alien:		return ConsoleColor_Green;
		case CellSymbol_Star:		return ConsoleColor_White;
	}
	return ConsoleColor_Gray;
}

ConsoleColor GetRenderCellSymbolBackgroundColor(unsigned char cellSymbol)
{
	switch (cellSymbol)
	{
		case CellSymbol_Ship:		return ConsoleColor_DarkGray;
	}
	return ConsoleColor_Black;
}
