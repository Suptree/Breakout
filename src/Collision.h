#ifndef COLLISION_H
#define COLLISION_H

class Bar;
class Box;
class Circle;

class Collision {


public:
  static bool ball_bar_col(Bar* bar, Circle* ball);
  static bool ball_box_col(Box* box, Circle* ball);


};

#endif
