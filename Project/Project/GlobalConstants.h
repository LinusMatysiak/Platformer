#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
namespace global{
	namespace window {
		constexpr		char				WINDOW_NAME[7]		{ "Window" };
		const			sf::Vector2u		WINDOW_RESOLUTION	{ sf::Vector2u(800,600) };
		const			sf::Color			WINDOW_COLOR		{ sf::Color::Blue };
	}
	namespace inputs {
		constexpr		sf::Keyboard::Key	FULLSCREEN_TOGGLE	{ sf::Keyboard::F11 };
	}
}