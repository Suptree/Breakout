#ifndef CREATE_FACTORY_H
#define CREATE_FACTORY_H
#include "Circle.h"
#include "Box.h"
#include "Bar.h"
#include <array>

class CreateFactory {
public:
  Bar M_bar;
  Circle M_ball;
  std::array<Box, 102> M_Box_List;

  Bar* getBar();
  Circle* getBall();
  Box* getBox(int index);
};

#endif
