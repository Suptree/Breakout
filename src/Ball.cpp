#include "Ball.h"
#include "ofMain.h"

Ball::Ball():eSize(15.0),speed(10.0)
{
  //コンストラクタ
  pos.x = ofGetWidth() / 2;//真ん中の位置から始める。
  pos.y = 200.0;
}

void Ball::col_box()
{
  XPlus = !XPlus;
  YPlus = !YPlus;
}

void Ball::update(){


  if ( pos.x > ofGetWidth() ){//壁の衝突判定 //バーとの衝突判定は
    XPlus = false;
  }

  if ( pos.x < 0 ){
    XPlus = true;
  }

  if ( pos.y > ofGetHeight() ){
    YPlus = false;
  }

  if ( pos.y < 0 ){
    YPlus = true;
  }





  XPlus ? pos.x += speed : pos.x -= speed;//壁反射
  YPlus ? pos.y += speed : pos.y -= speed;//壁反射


}

void Ball::display(){
  ofDrawCircle( pos.x, pos.y, eSize );//円byouga
}