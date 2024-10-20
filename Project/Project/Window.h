#include "GlobalConstants.h"
class Window
{
public:
	Window(); // default constructor, triggers setup with default resolution
	Window(const sf::Vector2u l_size); // constructor, passes resolution to setup
	~Window();

	void BeginDraw(); // clears window
	void EndDraw(); // draws onto window

	void HandleEvents();

	void setView(sf::View l_view);
	bool isDone(); //game loop variable
	bool isFullScreen();
	sf::Vector2u GetWindowSize();

	void ToggleFullScreen();

	void Draw(sf::Drawable& l_drawable);
private:
	void Setup(const sf::Vector2u l_size); //Setups the window
	void Destroy();
	void Create();

	sf::RenderWindow m_window;
	sf::Vector2u m_windowSize;
	sf::Image m_windowIcon;
	std::uint16_t m_windowFPS;
	bool m_isDone;
	bool m_isFullScreen;
};