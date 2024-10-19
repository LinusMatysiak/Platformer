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
void Player::HandlePlayerInput() {

	PlayerMovement l_playerAction = none;

	if (sf::Keyboard::isKeyPressed(global::game_inputs::MOVE_LEFT)) {
		l_playerAction = moveLeft;
	}
	else if (sf::Keyboard::isKeyPressed(global::game_inputs::MOVE_RIGHT)) {
		l_playerAction = moveRight;
	}
	else if (sf::Keyboard::isKeyPressed(global::game_inputs::JUMP)) {
		l_playerAction = jump;
	}

	std::cout << "MoveAction: " << l_playerAction << '\n';

	switch (l_playerAction) {
		case moveRight:
			m_playerSprite.move(1,0);
			break;

		case moveLeft:
			m_playerSprite.move(-1, 0);
			break;

		case jump:
			m_playerSprite.move(0, -1);
			break;
		default:
			break;
	}
}
sf::Sprite& Player::GetSprite() { return m_playerSprite; }
sf::Vector2f Player::GetPosition() { return m_playerSprite.getPosition(); }