#ifndef BAR_H
#define BAR_H

#include <iostream>
#include "ofMain.h"
#include "Vector2D.h"
#include "Object.h"


class  Bar : public Object {
public:
  Bar();
  // void init( float _width, float _height, float _speed ) ;//初期化

  void update() override;//更新
  void display() override;//描画

  void keyPressed(int key);//キーボードの読み取り
  void keyReleased(int key);

  // float xPos;//x座標
  // float yPos;//y座標
  //Vector2D pos( ofGetWidth() / 2.0 ,ofGetHeight() *  ( 8.0 / 10.0 ));

  //Vector2D pos(xPos,yPos);


  const float width;//長さ
  const float height;//高さ
  const float speed;//動く速さ

  bool XPlus = false;//右に進む
  bool XMinus = false;//左に進む


//  bool YPlus = false;

};

#endif
