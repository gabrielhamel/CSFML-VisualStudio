#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Main.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main(void)
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Starfield");
	sf::Event event;

	window.setFramerateLimit(60);
	window.setVerticalSyncEnabled(true);
	while (window.isOpen()) {
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed || event.key.code == sf::Keyboard::Escape)
				window.close();
		}
		window.clear(sf::Color::Black);
		window.display();
	}
	return (0);
}