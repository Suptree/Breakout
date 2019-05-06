#include "Box.h"
#include "ofMain.h"

Box::Box():weight(50),height(50),M_isValid(true){
  pos.x = 5;
  pos.y = 5;
}

void Box::setPosition(int x, int y)
{
  pos.x = x;
  pos.y = y;
}

void Box::update() {



}

void Box::display(){
  ofSetColor(0,0,255,50);
  ofRect(pos.x ,pos.y,weight,height);
  /*
  for(int i = 0; i < 30; i++){
    for(int j = 0; j < 6; j++){
      ofRect(pos.x + i*60,pos.y + j*60 ,weight,height);
    }
  }
  */
}
