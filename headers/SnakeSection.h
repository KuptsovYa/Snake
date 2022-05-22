#ifndef SNAKE_SNAKESECTION_H
#define SNAKE_SNAKESECTION_H

#include <SFML/Graphics.hpp>

class SnakeSection {
private:
    sf::Vector2f position;
    sf::RectangleShape section;

public:
    explicit SnakeSection(sf::Vector2f startPosition);

    sf::Vector2f getPosition();
    void setPosition(sf::Vector2f newPosition);

    sf::RectangleShape getShape();

    void update();

};


#endif //SNAKE_SNAKESECTION_H
