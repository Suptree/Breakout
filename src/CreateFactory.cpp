#include "CreateFactory.h"

Bar* CreateFactory::getBar() {
  return &M_bar;
}

Circle* CreateFactory::getBall()  {
  return &M_ball;
}

Box* CreateFactory::getBox(int idx)  {
  return &M_Box_List[idx];
}
