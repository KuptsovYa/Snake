#include "Engine.hpp"

const sf::Time Engine::TIME_PER_FRAME = sf::seconds(1.f / 60.f);

Engine::Engine() {
    resolution = sf::Vector2f(800, 600);
    window.create(sf::VideoMode(resolution.x, resolution.y), "Snake", sf::Style::Default);
    window.setFramerateLimit(FPS);

    snakeSpeed = 2;
    snakeDirection = Direction::RIGHT;
    timeSinceLastMove = sf::Time::Zero;

    newSnake();
}


//This is initial snake created of each level
void Engine::newSnake() {
    snake.clear();
    snake.emplace_back(sf::Vector2f(100,100));
    snake.emplace_back(sf::Vector2f(80,100));
    snake.emplace_back(sf::Vector2f(60,100));
}

void Engine::addSnakeSection() {
    sf::Vector2f newSectionPosition = snake[snake.size() - 1].getPosition();
    snake.emplace_back(newSectionPosition);
}

void Engine::run() {
    sf::Clock clock;
    //Main loop
    while (window.isOpen()) {
        sf::Time dt = clock.restart();
        timeSinceLastMove += dt;
        input();
        update();
        draw();
    }
}