#include "Engine.hpp"

const sf::Time Engine::TIME_PER_FRAME = sf::seconds(1.f / 60.f);

Engine::Engine() {
    resolution = sf::Vector2f(800, 600);
    window.create(sf::VideoMode(resolution.x, resolution.y), "Snake", sf::Style::Default);
    window.setFramerateLimit(FPS);
}

void Engine::run() {
    //Main loop
    while (window.isOpen()) {
        draw();
    }
}