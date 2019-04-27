#ifndef GAME_H_
#define GAME_H_

#include "ofMain.h"
#include <iostream>

// #include "Circle.h"
// #include "Bar.h"
// #include "Box.h"
// #include "Game.h"
// #include "Vector2D.h"
#include "CreateFactory.h"
class Game {
public:
  void start();
  void update();
  void display();
  void keyPressed(int key);
  void keyReleased(int key);

  CreateFactory createfactory;




  // Circle c1;
  // Bar bar;
  // Box box;

};

#endif
