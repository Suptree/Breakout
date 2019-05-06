#ifndef GAME_H_
#define GAME_H_

#include "CreateFactory.h"

class Bar;
class Box;
class Ball;

class Game {
public:
  void start();
  void update();
  void display();
  void keyPressed(int key);
  void keyReleased(int key);

  // オブジェクト生成クラス
  CreateFactory mFactory;

  // 操作用ポインタ
  Bar* Mp_bar;
  Ball* Mp_ball;
  std::array<Box*, 102> Mp_Box_List;
};

#endif
