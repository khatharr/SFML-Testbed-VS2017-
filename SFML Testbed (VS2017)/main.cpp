#define SFML_STATIC
#include "SFML/Main.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

int main() {
  sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Testbed");
  window.setFramerateLimit(60);
     
  sf::CircleShape shape(50);
  shape.setFillColor(sf::Color(100, 250, 50));
  sf::Vector2f position(100, 100);
     
  for(bool run = true; run;) {
    //logic
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {run = false; break;}
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))   {position.x--;}
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))  {position.x++;}
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))     {position.y--;}
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))   {position.y++;}
    shape.setPosition(position);
     
    //drawing
    window.clear();
    window.draw(shape);
    window.display();
     
    //event handling
    sf::Event event;
    while(window.pollEvent(event)) {
      if(event.type == sf::Event::Closed) {run = false; break;}
    }
  }
     
  return 0;
}
