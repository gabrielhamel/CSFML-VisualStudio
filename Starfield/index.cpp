/*#include <SFML/Audio.hpp>
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
}*/

#include <SFML/Graphics.h>

int main(int ac, char **av)
{
    sfVideoMode mode = { 800, 600, 32 };
    sfRenderWindow *window = sfRenderWindow_create(mode, "Starfield", sfClose, NULL);
    sfEvent event;

    sfRenderWindow_setFramerateLimit(window, 60);
    sfRenderWindow_setVerticalSyncEnabled(window, true);
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event))
            if (event.type == sfEvtClosed || event.key.code == sfKeyEscape)
                sfRenderWindow_close(window);
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_display(window);
    }

    return (0);
}