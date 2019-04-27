#ifndef CIRCLE_H
#define CIRCLE_H

#include <stdio.h>
#include "ofMain.h"
#include "Object.h"


class Circle : public Object {
public:

  Circle();

  void init( float _y, int _eSize, float _speed ); //初期化するときに使うやつ
  void update();//更新する
  void display();//描画

  //ofVec2f position;//これも使えるかも

  const float eSize;//円の大きさ
  const float speed;

  bool XPlus = true;//衝突判定のときに使う
  bool YPlus = false;



};

#endif
