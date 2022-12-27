#include "Game.h"
#include "SDL.h"
#include <iostream>
#include "SDL_image.h"
Game *game = nullptr;

int main(int argc, char *argv[])
{
	game = new Game();
	game->init("GameWindow", 800, 600, false);

	while (game->running())
	{
		game->handleEvents();
		game->update();
		game->render();
	}

	game->clean();
	return 0;
}