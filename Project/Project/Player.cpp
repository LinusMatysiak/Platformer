#include "Player.h"

Player::Player() {
	Setup();
}
void Player::Setup() {
	m_playerTexture.loadFromFile("Graphics/Textures/player.png");
	m_playerSprite.setPosition(200,200);
	m_playerSprite.setTexture(m_playerTexture);
	m_playerSprite.setOrigin(m_playerTexture.getSize().x / 2, m_playerTexture.getSize().y / 2); // sets player origin at center
}
void Player::Move(float l_deltaTime) {
	m_playerSprite.move(m_velocity.x * speed * l_deltaTime, m_velocity.y * speed * l_deltaTime);
}
void Player::HandlePlayerInput() {

	PlayerMovement l_playerAction = none;

	m_velocity.x = 0;
	m_velocity.y = 0;

	if (sf::Keyboard::isKeyPressed(global::game_inputs::MOVE_LEFT)) {
		l_playerAction = moveLeft;
	}
	else if (sf::Keyboard::isKeyPressed(global::game_inputs::MOVE_RIGHT)) {
		l_playerAction = moveRight;
	}
	else if (sf::Keyboard::isKeyPressed(global::game_inputs::JUMP)) {
		l_playerAction = jump;
	}
	switch (l_playerAction) {
		case moveRight:
			m_velocity.x = 1;
			break;

		case moveLeft:
			m_velocity.x = -1;
			break;

		case jump:
			break;
		default:
			break;
	}
}
sf::Sprite& Player::GetSprite() { return m_playerSprite; }
sf::Vector2f Player::GetPosition() { return m_playerSprite.getPosition(); }