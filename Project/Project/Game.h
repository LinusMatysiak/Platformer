#pragma once
#include "Window.h"
#include "Player.h"
class Game {

public:
	Game();
	~Game();

	void Update();
	void HandleInput();
	void Render();

	sf::Time GetElapsed();
	void RestartClock();

	Window* GetWindow();

private:
	sf::Clock m_clock;
	sf::Time m_elapsed;

	Player player;

	Window m_window;
};