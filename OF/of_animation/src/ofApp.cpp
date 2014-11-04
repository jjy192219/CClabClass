#include "ofApp.h"



//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetVerticalSync(true);
    
    ofBackground(0,0,0);
    
    ofSetCircleResolution(100);
    
    
    radius = 100;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    radius = radius + 0.1;
//    if(radius>100){
//        radius = radius+0.5;
//    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    float xorig = 500;
    float yorig = 300;
    float angle = ofGetElapsedTimef()*3.5;
    
    float x = xorig + radius * -cos(angle)*1.5;
    float y = yorig + radius * sin(angle)*ofRandom(-1.5,1.5);
    
    ofPoint temp;
    temp.x = x;
    temp.y = y;
    points.push_back(temp);
    if (points.size() > 1000){
        points.erase(points.begin());
    }
    
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofSetColor(255,0,127);
    ofFill();
    ofCircle(x,y,10);
    
    ofSetColor(255,255,255);
    
    ofNoFill();
    ofBeginShape();
    for (int i = 0; i < points.size(); i++){
        ofVertex(points[i].x, points[i].y);
        ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
    }
    ofEndShape();
    
    
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
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
void ofApp::windowResized(int w, int h){
    
}