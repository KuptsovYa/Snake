#include "Engine.hpp"

void Engine::draw() {
    window.clear(sf::Color::Black);

    for(auto & s : snake) {
        window.draw(s.getShape());
    }
    
    window.display();
}