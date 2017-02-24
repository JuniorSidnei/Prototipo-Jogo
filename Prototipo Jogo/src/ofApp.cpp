#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	nego = new Jogador(145, 500, "nego.png");
	a1 = new Arma(nego->GetPos().x, nego->GetPos().y, "Arma1.png");
	ter = new Terreno(0, 0, "Caverna.png");
	bala1 = new Bala(0, 0, "Bala.png");
	ini1 = new Inimigo(400, 250, "inimigo1.png");
}

//--------------------------------------------------------------
void ofApp::update(){
	nego->Mover(2);
	a1->Mover(nego->GetPos());	
	if (bala1->GetAtirando())
		bala1->Mover();

	if (ini1->GetVivo())
	{
		ini1->Mover();
		ini1->Colidir(nego);
		ini1->Colidir(bala1);
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ter->Desenhar();
	nego->Desenhar();
	a1->Desenhar();
	if (bala1->GetAtirando())
		bala1->Desenhar();

	if(ini1->GetVivo())
		ini1->Desenhar();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	
	switch (key)
	{
	case OF_KEY_RIGHT:
		nego->SetMoverHorizontal(1);
		break;
	case OF_KEY_LEFT:
		nego->SetMoverHorizontal(-1);
		break;
	case OF_KEY_DOWN:
		nego->SetMoverVertical(1);
		break;
	case OF_KEY_UP:
		nego->SetMoverVertical(-1);
		break;
	case GLFW_KEY_SPACE:
		bala1->PosDisparo(a1->GetPos());
		break;

	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
	if (key == OF_KEY_RIGHT || key == OF_KEY_LEFT)
		nego->SetMoverHorizontal(0);
	if (key == OF_KEY_DOWN || key == OF_KEY_UP)
		nego->SetMoverVertical(0);
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
