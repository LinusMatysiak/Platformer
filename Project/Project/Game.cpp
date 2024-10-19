#include "Game.h"

Game::Game() : m_window() { //initializes window

}
Game::~Game() {

}
void Game::Update() { // updates gamelogic
	m_window.Update();
}
void Game::HandleInput() {
	player.HandlePlayerInput();
}
void Game::Render() {
	m_window.BeginDraw();
	m_window.Draw(player.GetSprite());
	m_window.EndDraw();
}
sf::Time Game::GetElapsed() { return m_elapsed; }
void Game::RestartClock() { m_elapsed += m_clock.restart(); }
Window* Game::GetWindow() { return &m_window; }