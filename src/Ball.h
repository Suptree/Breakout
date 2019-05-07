#ifndef Ball_H
#define Ball_H

#include <stdio.h>
#include "Object.h"

class Ball : public Object {
public:
  //コンストラクタ
  Ball();

  void update();//更新する
  void display();//描画

  void col_box(); // 箱とあたった時にどうするか処理を書く

  //eSizeの値を返す。
  const double getBallRadius() const{
    return eSize;
  }
  //posの値を返す。
  const Vector2D getPos() const {
    return pos;
  }

  //バーと壁の衝突判定
  void col_ball_wall();


  const float eSize;//ボールの大きさ
  const float speed;//ボールの速さ

  bool XPlus = true;//衝突判定のときに使う
  bool YPlus = false;

};

#endif
