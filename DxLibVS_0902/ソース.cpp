#include "DxLib.h"

#define GAME_WIDTH		800
#define GAME_HEIGHT		600
#define GAME_COLOR		32

#define GAME_WINDOW_BAR		0
#define GAME_WINDOW_NAME	"GAME TITLE"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	SetOutApplicationLogValidFlag(FALSE);
	ChangeWindowMode(TRUE);
	SetOutApplicationLogValidFlag(FALSE);
	SetWindowStyleMode(FALSE);
	SetOutApplicationLogValidFlag(FALSE);
	SetAlwaysRunFlag(TRUE);
}
