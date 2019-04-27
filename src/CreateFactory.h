#ifndef CREATE_FACTORY_H
#define CREATE_FACTORY_H
#include "Circle.h"
#include "Box.h"
#include "Bar.h"
class CreateFactory {
public:
  Circle M_ball;
  Box M_box;
  Bar M_bar;


  const Circle & ball() const { return M_ball; }
  const Box & box() const { return M_box; }
  const Bar & bar() const { return M_ball; }


};

#endif
