#include "CreateFactory.h"

Bar& CreateFactory::getBar() {
  return M_bar;
}

Ball& CreateFactory::getBall()  {
  return M_ball;
}

Box& CreateFactory::getBox(int index)  {
  return M_Box_List[index];
}
