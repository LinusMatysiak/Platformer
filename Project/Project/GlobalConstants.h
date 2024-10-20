#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdint>

namespace global{
	namespace window {
		constexpr		char				WINDOW_NAME[7]		{ "Window" };
		constexpr		char				WINDOW_ICON[23]		{ "Graphics/Icon/icon.png" };
		const			sf::Vector2u		WINDOW_RESOLUTION	{ sf::Vector2u(800,600) };
		const			sf::Color			WINDOW_COLOR		{ sf::Color::Blue };
	}
	namespace window_inputs {
		constexpr		sf::Keyboard::Key	FULLSCREEN_TOGGLE	{ sf::Keyboard::F11 };
	}
	namespace game_inputs {
		constexpr		sf::Keyboard::Key	MOVE_LEFT			{ sf::Keyboard::A };
		constexpr		sf::Keyboard::Key	MOVE_RIGHT			{ sf::Keyboard::D };
		constexpr		sf::Keyboard::Key	JUMP				{ sf::Keyboard::Space };
	}
}