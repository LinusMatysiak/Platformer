#pragma once
#include "Window.h"
class Game {

public:
	Game();
	~Game();

	void Update();
	void HandleInput();
	void Render();

	Window* GetWindow();

private:
	Window m_window;
};