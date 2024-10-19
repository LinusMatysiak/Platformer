#include "Game.h"
int main()
{
	Game game;
	while (!game.GetWindow()->isDone())
	{
		game.Update();
		game.Render();
	}
    return EXIT_SUCCESS;
}