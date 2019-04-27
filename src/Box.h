#ifndef BOX_H
#define BOX_H

#include <iostream>
#include "ofMain.h"
#include "Object.h"

class Box : public Object{
public:
  Box();
  void update() override;
  void display() override;

  const double weight;
  const double height;

};
#endif
