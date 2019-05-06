#include "Collision.h"
#include "Circle.h"
#include "Bar.h"
#include "Box.h"

bool Collision::ball_bar_col(Bar* bar, Circle* ball)
{
  if( bar->pos.x == ball->pos.x ){
    std::cout << "[Collision] Bar-Ball Hit" << std::endl;
  }
}

bool Collision::ball_box_col(Box* box, Circle* ball)
{
  double box_x = box->pos.x;
  double box_y = box->pos.y;
  double ball_x = ball->pos.x;
  double ball_y = ball->pos.y;
  double width = box->weight / 2;
  double height = box->height / 2;

  if (ball_x > box_x - width && ball_x < box_x + width)
  {
      if (ball_y > box_y - height && ball_y < box_y + height)
      {
          std::cout << "[Collision] Box-Ball Hit" << std::endl;
          return true;
      }
  }
  return false;
}
