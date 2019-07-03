#ifndef Ball_H
#define Ball_H

#include "Object.h"

class Ball : public Object {
public:
  //コンストラクタ
  Ball();

  void update();//更新する
  void display();//描画

  void on_collision_to_box_detected(); // 箱とあたった時にどうするか処理を書く

  //eSizeの値を返す。
  const double getBallRadius() const{
    return eSize;
  }
  // //posの値を返す。
  Vector2D getPos() const {
    return pos;
  }

  //バーと壁の衝突判定
  void col_ball_wall();


  constexpr static double eSize = 15.0;//ボールの大きさ
  constexpr static double speed = 10.0;//ボールの速さ

  bool XPlus = true;//衝突判定のときに使う
  bool YPlus = false;

};

#endif
