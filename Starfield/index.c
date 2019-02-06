#include <SFML/Graphics.h>

int main(int ac, char **av)
{
    sfVideoMode mode = { 800, 600, 32 };
    sfRenderWindow *window = sfRenderWindow_create(mode, "name_here", sfClose, NULL);
    sfEvent event;

    sfRenderWindow_setFramerateLimit(window, 60);
    sfRenderWindow_setVerticalSyncEnabled(window, sfTrue);
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event))
            if (event.type == sfEvtClosed || event.key.code == sfKeyEscape)
                sfRenderWindow_close(window);
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_display(window);
    }
    return (0);
}