#include "Game.h"

Game::Game() : m_window() { //initializes window

}
Game::~Game() {

}
void Game::Update() { // updates gamelogic
	player.Move(DeltaTime());
	std::cout << DeltaTime() << '\n';
}
void Game::HandleInput() {
	m_window.HandleEvents();
	player.HandlePlayerInput();
}
void Game::Render() {
	m_window.BeginDraw();
	m_window.Draw(player.GetSprite());
	m_window.EndDraw();
}
Window* Game::GetWindow() { return &m_window; }

sf::Time Game::GetElapsed() { return m_elapsed; }
void Game::RestartClock() { m_elapsed = m_clock.restart(); }
float Game::DeltaTime() { return m_elapsed.asSeconds(); }