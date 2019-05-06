#include "Game.h"
#include "CreateFactory.h"
#include "Collision.h"
#include "ofMain.h"


void Game::start(){
  ofBackground( 255, 255, 255 );
  ofSetCircleResolution(64);
  Mp_bar = mFactory.getBar();
  Mp_ball = mFactory.getBall();
  for(int i = 0; i < 102; i++)
  {
    Mp_Box_List[i] = mFactory.getBox(i);
    Mp_Box_List[i]->setPosition(5 + 60 * (i % 17), 5 + 60 * (i / 17));
  }

  // c1.init(100, 10, 1.0);//y座標,円の大きさ,スピード
  // c2.init(200, 15, 3.0);
  //mFactory.bar().init(100,20, 10);//width,height,speed
  // box.init();


  //

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
  for(int i = 0; i < 102 ;i++)
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
