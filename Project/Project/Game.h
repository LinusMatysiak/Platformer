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

	float DeltaTime();
	void RestartClock();
	sf::Time GetElapsed();

	Window* GetWindow();

private:

	sf::Clock m_clock;
	sf::Time m_elapsed;

	Player player;

	Window m_window;

};