#include "testApp.h"

// here we "define" the methods we "declared" in the "testApp.h" file

// i get called once
void testApp::setup(){
	
	// do some initialization
	
	// set the size of the window
	ofSetWindowShape(250, 250);
	
	// the rate at which the program runs (FPS)
	ofSetFrameRate(30);
	
	// we are going to increment this variable each "frame"
	counter = 0;
	
	brightness = 0;
	
	ofResetElapsedTimeCounter();
}

// i get called in a loop that runs until the program ends
void testApp::update(){

	// update some variables
	counter = counter + 1;
}

// i also get called in a loop that runs until the program ends
void testApp::draw(){
	ofBackground(0);
	
		
	brightness = sin(ofGetElapsedTimef() * 5.0) * 128.0 + 128.0;
	printf("%f\n", brightness);
	ofSetColor(brightness, 0, 0);
	ofNoFill();
	ofRect(20, 20, 100, 100);
	 
}