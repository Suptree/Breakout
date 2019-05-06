#ifndef Ball_H
#define Ball_H

#include <stdio.h>
#include "Object.h"


class Ball : public Object {
public:

  Ball();

  void init( float _y, int _eSize, float _speed ); //初期化するときに使うやつ
  void update();//更新する
  void display();//描画

  void col_box(); // 箱とあたった時にどうするか処理を書く

  //ofVec2f position;//これも使えるかも

  const float eSize;//円の大きさ
  const float speed;

  bool XPlus = true;//衝突判定のときに使う
  bool YPlus = false;



};

#endif
