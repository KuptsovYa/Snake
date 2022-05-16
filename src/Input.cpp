#include "Engine.hpp"

void Engine::input() {
    sf::Event event{};

    while (window.pollEvent(event)){
        if (event.type == sf::Event::Closed) {
            window.close();
        }

        if (event.type == sf::Event::KeyPressed) {
            if (event.type == sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
                window.close();
            }
        }
    }
}