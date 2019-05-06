#ifndef COLLISION_H
#define COLLISION_H

class Bar;
class Box;
class Ball;

class Collision {


public:
  static bool ball_bar_col(Bar* bar, Ball* ball);
  static bool ball_box_col(Box* box, Ball* ball);


};

#endif
