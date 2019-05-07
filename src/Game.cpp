#include "Game.h"
#include "CreateFactory.h"
#include "Collision.h"
#include "ofMain.h"


void Game::start(){
  ofBackground( 255, 255, 255 );//背景
  ofSetCircleResolution(64);//FPSかな


  Mp_bar = mFactory.getBar();//インスタンスのポインタを操作用ポインタに格納している。
  Mp_ball = mFactory.getBall();//おなじ

  for(int i = 0; i < 102; i++)//ブロックのいちを計算している
  {
    Mp_Box_List[i] = mFactory.getBox(i);
    Mp_Box_List[i]->setPosition(5 + 60 * (i % 17), 5 + 60 * (i / 17));
  }


}

void Game::update(){

  Mp_bar->update(); // Bar のアップデート
  Mp_ball->update(); // Ball のアップデート

  Collision::ball_bar_col(Mp_bar, Mp_ball); // Bart と Ball の衝突判定

  for(int i = 0; i < 102 ;i++)
  {
    if(Mp_Box_List[i]->M_isValid == true)
    {
      if( Collision::ball_box_col(Mp_Box_List[i], Mp_ball))
      {
          Mp_Box_List[i]->M_isValid = false; // Box 側の操作
          Mp_ball->col_box(); // Ball 側の操作
      }
    }
  }
  //mFactory.bar().getWidth(); // const Bar => update みたいな非 const 関数を呼ぼうとするとエラー

  //mFactory.bar().update(); // const Bar => update みたいな非 const 関数を呼ぼうとするとエラー
  // c1.update();
  //
  // bar.update();
  // box.update();
  // std::cout << bar.pos.x << std::endl;



}

void Game::display(){
  ofSetColor(0,0,0);


  Mp_bar->display();  //width,height,speed
  Mp_ball->display(); // Ball


  for(int i = 0; i < 102 ;i++)//box
  {
    if(Mp_Box_List[i]->M_isValid == true)
    {
      Mp_Box_List[i]->display();
    }
  }
  // c1.display();
  //
  // bar.display();
  // box.display();



}

void Game::keyPressed(int key){
  std::cout << "[Game] Push" << std::endl;
  Mp_bar->keyPressed(key);
  // bar.keyPressed(key);
}

void Game::keyReleased(int key){
  std::cout << "[Game] Release" << std::endl;
  Mp_bar->keyReleased(key);
  // bar.keyReleased(key);
}
