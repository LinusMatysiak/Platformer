#include "Window.h"

Window::Window() {
	Setup(sf::Vector2u(global::window::WINDOW_RESOLUTION.x, global::window::WINDOW_RESOLUTION.y));
}
Window::Window(const sf::Vector2u l_size) {
	Setup(l_size);
}
Window::~Window() {

}
void Window::Setup(const sf::Vector2u l_size) {
	m_windowSize = l_size;
	m_windowFPS = global::window::WINDOW_FPS;
	m_windowIcon.loadFromFile(global::window::WINDOW_ICON);
	m_isFullScreen = false;
	m_isDone = false;
	Create();
}
void Window::Create() {
	std::uint16_t style = (m_isFullScreen ? sf::Style::Fullscreen : sf::Style::Default);
	m_window.create(sf::VideoMode(m_windowSize.x, m_windowSize.y, 32), global::window::WINDOW_NAME, style);
	m_window.setIcon(m_windowIcon.getSize().x, m_windowIcon.getSize().y, m_windowIcon.getPixelsPtr());
	m_window.setFramerateLimit(m_windowFPS);
}
void Window::ToggleFullScreen() {
	m_isFullScreen = !m_isFullScreen;
	m_window.close();
	Create();
}

void Window::HandleEvents() {
	sf::Event event;
	while (m_window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed) {
			m_isDone = true;
		}
		else if (event.type == sf::Event::KeyPressed &&
			event.key.code == sf::Keyboard::F11) 
		{
			ToggleFullScreen();
		}
	}
}

void Window::BeginDraw()					{ m_window.clear(sf::Color(global::window::WINDOW_COLOR)); }
void Window::Destroy()						{ m_window.close(); }
bool Window::isDone()						{ return m_isDone; }
bool Window::isFullScreen()					{ return m_isFullScreen; }
void Window::Draw(sf::Drawable& l_drawable) { m_window.draw(l_drawable); }
sf::Vector2u Window::GetWindowSize()		{ return m_windowSize; }
void Window::EndDraw()						{ m_window.display(); }
