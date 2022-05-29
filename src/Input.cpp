#include "Engine.hpp"

void Engine::input() {
    sf::Event event{};

    while (window.pollEvent(event)){
        if (event.type == sf::Event::Closed) {
            window.close();
        }

        if (event.type == sf::Event::KeyPressed) {

            if (event.key.code == sf::Keyboard::Escape) {
                window.close();
            }

            switch (event.key.code) {
                case sf::Keyboard::Up:
                    addDirection(Engine::Direction::UP);
                case sf::Keyboard::Down:
                    addDirection(Engine::Direction::DOWN);
                case sf::Keyboard::Left:
                    addDirection(Engine::Direction::LEFT);
                case sf::Keyboard::Right:
                    addDirection(Engine::Direction::RIGHT);
                default:
                    break;
            }
        }
    }
}

void Engine::addDirection(int newDirection) {
    if (directionQueue.empty()) {
        directionQueue.emplace_back(newDirection);
    } else {
        if (directionQueue.back() != newDirection) {
            directionQueue.emplace_back(newDirection);
        }
    }
}