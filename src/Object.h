#ifndef OBJECT_H
#define OBJECT_H
#include "Vector2D.h"

class Object {
public:
  //オブジェクトのPosition (x,y)
  Vector2D pos;

  //純粋仮想関数
  virtual void update() =0;
  virtual void display() =0;
  







};

#endif
