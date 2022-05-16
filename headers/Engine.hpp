#ifndef SNAKE_ENGINE_HPP
#define SNAKE_ENGINE_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

class Engine {
private:
    //Window
    sf::Vector2f resolution;
    sf::RenderWindow window;
    const unsigned int FPS = 60;
    static const sf::Time TIME_PER_FRAME;

public:
    Engine();

    void input();

    void draw();

    //The main loop will be in the run function
    void run();

};


#endif //SNAKE_ENGINE_HPP
