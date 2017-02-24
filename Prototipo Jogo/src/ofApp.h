#pragma once

#include "ofMain.h"
#include "Arma.h"
#include "Jogador.h"
#include "Terreno.h"
#include "Bala.h"
#include "Inimigo.h"

class ofApp : public ofBaseApp{
private:
	Arma *a1;
	Bala *bala1;
	Jogador *nego;
	Inimigo *ini1;
	Terreno* ter;
	int actualTime = 0, previousTime = 0;
	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
