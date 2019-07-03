#include "Ball.h"
#include "ofMain.h"

//コンストラクタ
Ball::Ball()
{
  pos.x = ofGetWidth() / 2;//真ん中の位置から始める。
  pos.y = 200.0;
}

//ボックスとボールの当たり判定
void Ball::on_collision_to_box_detected()
{
  XPlus = !XPlus;
  YPlus = !YPlus;
}

//ボールの情報を更新をする。
void Ball::update()
{
  //壁とボールの衝突判定
  col_ball_wall();



}


//画面に表示する関数
void Ball::display(){
  ofDrawCircle( pos.x, pos.y, eSize );//円を描画する //eSizeは半径
}



//壁とボールの衝突判定をする関数
void Ball::col_ball_wall(){

  if ( pos.x > ofGetWidth() ){//壁の衝突判定
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
