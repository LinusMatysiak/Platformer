#pragma once
#include "GlobalConstants.h"


class Player {

public:

	Player();

	void HandlePlayerInput();
	void Move(float l_deltaTime);

	sf::Vector2f GetPosition();
	sf::Sprite& GetSprite();
private:

	void Setup();
	enum PlayerMovement { none, moveLeft, moveRight, jump };
	sf::Texture m_playerTexture;
	sf::Sprite m_playerSprite;

	sf::Vector2f m_velocity;
	const float speed = 100.0f;
};