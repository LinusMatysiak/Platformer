#include "Game.h"

Game::Game() : m_window() { //initializes window

}
Game::~Game() {

}
void Game::Update() { // updates gamelogic
	m_window.Update();
}
void Game::HandleInput() {

}
void Game::Render() {
	m_window.BeginDraw();
	//m_window.Draw();
	m_window.EndDraw();
}
Window* Game::GetWindow() { return &m_window; }