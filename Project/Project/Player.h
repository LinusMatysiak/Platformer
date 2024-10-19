#pragma once
#include "GlobalConstants.h"


class Player {

public:

	Player();

	void HandlePlayerInput();

	sf::Vector2f GetPosition();
	sf::Sprite& GetSprite();
private:


	void Setup();
	enum PlayerMovement { none, moveLeft, moveRight, jump };
	sf::Texture m_playerTexture;
	sf::Sprite m_playerSprite;
};