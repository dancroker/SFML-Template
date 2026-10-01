
#ifndef SFML_GAME_H
#define SFML_GAME_H

#include <SFML/Graphics.hpp>

class Game
{
 public:
  Game(sf::RenderWindow& window);
  ~Game();
  bool init();
  void update(float dt);
  void render();
  void mouseButtonPressed(const sf::Event::MouseButtonPressed* event);
  void mouseButtonReleased(const sf::Event::MouseButtonReleased* event);
  void keyPressed(const sf::Event::KeyPressed* event);
  void keyReleased(const sf::Event::KeyReleased* event);

 private:
  sf::RenderWindow& window;
  
  sf::Texture background_texture{ "../Data/Images/WhackaMole Worksheet/background.png" };
  sf::Sprite background_sprite{ background_texture };


  sf::Texture bird_texture{ "../Data/Images/WhackaMole Worksheet/bird.png" };
  sf::Sprite bird{ bird_texture };

  sf::Font font{ "../Data/Fonts/OpenSans-Bold.ttf" };
  sf::Text title_text{ font };
  
};

#endif // SFML_GAME_H
