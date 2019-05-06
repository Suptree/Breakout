#include "Bar.h"
#include "ofMain.h"

Bar::Bar():width(100),height(10),speed(10){
  pos.x = ofGetWidth() / 2.0;
  pos.y = ofGetHeight() *  ( 8.0 / 10.0 );
  XPlus = false;
  XMinus = false;
}


void Bar::update(){//バーを動かしたりする
  //xPos += speed;
  if( XPlus && pos.x < ofGetWidth() - 110){
      pos.x += speed;
  }

  if( XMinus && pos.x > 0 ){
      pos.x -= speed;
  }

}


void Bar::display(){//描画する
  ofRect( pos.x, pos.y, width, height);
}

void Bar::keyPressed(int key){
  if ( key == OF_KEY_RIGHT  ){//右のキーを押したら右に進む
    XPlus = true;
  }

  if ( key == OF_KEY_LEFT ){//左のキーを押したら左に進む
    XMinus = true;
  }

}

void Bar::keyReleased(int key){
  if ( key == OF_KEY_RIGHT  ){//右のキーを押したら右に進む
    XPlus = false;
  }

  if ( key == OF_KEY_LEFT ){//左のキーを押したら左に進む

    XMinus = false;
  }
}
