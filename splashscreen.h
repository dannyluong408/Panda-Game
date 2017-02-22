#ifndef SPLASHSCREEN_H
#define SPLASHSCREEN_H

#include <iostream>
#include "SFML/Graphics.hpp"
#include "gamescreen.h"
#include "screenmanager.h"
#include "titlescreen.h"

class SplashScreen : public GameScreen {
 public:
  SplashScreen();
  ~SplashScreen();

  void load_content();
  void unload_content();
  void update(sf::RenderWindow &window, sf::Event event);
  void draw(sf::RenderWindow &window);

 private:
  sf::Text text;
  sf::Font font;
};

#endif  // SPLASHSCREEN_H
