#include "Game.h"
#include <iostream>
#include "CreateFactory.h"
void Game::start( CreateFactory & cf){
  ofBackground( 255, 255, 255 );
  ofSetCircleResolution(64);
  // c1.init(100, 10, 1.0);//y座標,円の大きさ,スピード
  // c2.init(200, 15, 3.0);
  // bar.init(100,20, 10);//width,height,speed
  // box.init();


  //

}

void Game::update( CreateFactory & cf){

  // c1.update();
  //
  // bar.update();
  // box.update();
  // std::cout << bar.pos.x << std::endl;



}

void Game::display( CreateFactory & cf){
  ofSetColor(0,0,0);
  // c1.display();
  //
  // bar.display();
  // box.display();
  


}

void Game::keyPressed(int key){
  // bar.keyPressed(key);

}

void Game::keyReleased(int key){
  // bar.keyReleased(key);
}
