#ifndef BOX_H
#define BOX_H

#include <iostream>
#include "Object.h"

class Box : public Object{
public:
  Box();
  void setPosition(int x, int y);
  void update() override;
  void display() override;

  const double weight;
  const double height;
  bool M_isValid;
};
#endif
