#ifndef SNAKE_ENGINE_HPP
#define SNAKE_ENGINE_HPP

#include "SnakeSection.h"
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <vector>
#include <deque>

class Engine {
private:
    //Window
    sf::Vector2f resolution;
    sf::RenderWindow window;
    const unsigned int FPS = 60;
    static const sf::Time TIME_PER_FRAME;

    std::vector<SnakeSection> snake;

    int snakeDirection;
    std::deque<int> directionQueue;
    int snakeSpeed;

    sf::Time timeSinceLastMove;

public:

    enum Direction {UP, RIGHT, DOWN, LEFT};

    Engine();

    void input();

    void addDirection(int newDirection);

    void update();

    void draw();

    void newSnake();

    void addSnakeSection();

    //The main loop will be in the run function
    void run();

};


#endif //SNAKE_ENGINE_HPP
