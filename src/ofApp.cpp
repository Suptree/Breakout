#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){

  game.start();

}

//--------------------------------------------------------------
void ofApp::update(){

  game.update();


}

//--------------------------------------------------------------
void ofApp::draw(){

  game.display();

}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  game.keyPressed(key);

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
  game.keyReleased(key);

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
