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

	Window* GetWindow();

private:
	Player player;

	Window m_window;
};