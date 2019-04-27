#include "Box.h"

Box::Box():weight(50),height(50){
  pos.x = 5;
  pos.y = 5;
}

void Box::update() {

  //接触したら消えるコードを書く

}

void Box::display(){
  ofSetColor(0,0,255,50);

  for(int i = 0; i < 30; i++){
    for(int j = 0; j < 6; j++){
      ofRect(pos.x + i*60,pos.y + j*60 ,weight,height);
    }
  }

}
