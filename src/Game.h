#ifndef GAME_H_
#define GAME_H_

#include "ofMain.h"
#include <iostream>

// #include "Circle.h"
// #include "Bar.h"
// #include "Box.h"
// #include "Game.h"
// #include "Vector2D.h"
#include "Collision.h"
#include "CreateFactory.h"
class Game {
public:
  void start( CreateFactory & cf );
  void update(CreateFactory & cf );
  void display( CreateFactory & cf);
  void keyPressed(int key);
  void keyReleased(int key);






  // Circle c1;
  // Bar bar;
  // Box box;
  Collision col;

};

#endif
