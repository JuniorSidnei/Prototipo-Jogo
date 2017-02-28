#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	nego = new Jogador(145, 500, "nego.png");
	a1 = new Arma(nego->GetPos().x, nego->GetPos().y, "Arma1.png");
	ter = new Terreno(0, 0, "Caverna.png");
	bala1 = new Bala(0, 0, "bala.png", 1, 39, 11);
	ini1[0] = new Inimigo(400, 250, "inimigo1.png", 2);
	for(int i = 0; i<3;i++)
		ui[i] = new UI(20 + 84*i, 20, "heart.png", 64, 64);
}

//--------------------------------------------------------------
void ofApp::update(){
	nego->Mover(2);
	if (nego->GetInvul())
		nego->TimeInvul();

	if (!nego->GetVivo())
		ofExit(0);

	a1->Mover(nego->GetPos());	
	if (bala1->GetAtirando())
		bala1->Mover();

	for(int i =0; i<3;i++)
		if(ini1[i] != nullptr)
			if (ini1[i]->GetVivo())
			{
				ini1[i]->Mover();
				ini1[i]->Colidir(nego);
				ini1[i]->Colidir(bala1);
			}
	if (boss != nullptr)
		if (boss->GetVivo())
		{
			boss->Mover();
			boss->Colidir(nego);
			boss->Colidir(bala1);
		}
}

//--------------------------------------------------------------
void ofApp::draw(){
	
	ter->Desenhar();
	for (int i = 0; i < nego->GetVida(); i++)
		ui[i]->Desenhar();
	nego->Desenhar();
	a1->Desenhar();
	if (bala1->GetAtirando())
		bala1->Desenhar();
	switch (estadoJogo)
	{
	case FASE01:
	{
		if (ini1[0]->GetVivo())
			ini1[0]->Desenhar();
		break;
	}
	case FASE02:
	{
		for (int i = 0; i < 3; i++)
		{
			if (ini1[i]->GetVivo())
				ini1[i]->Desenhar();
		}
		break;
	}
	case BOSS:
	{
		if(boss->GetVivo())
			boss->Desenhar();
		break;
	}
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	
	switch (key)
	{
	case 'd':
		nego->SetMoverHorizontal(1);
		break;
	case 'a':
		nego->SetMoverHorizontal(-1);
		break;
	case 's':
		nego->SetMoverVertical(1);
		break;
	case 'w':
		nego->SetMoverVertical(-1);
		break;
	case OF_KEY_RIGHT:
		bala1->PosDisparo(a1->GetPos(),0);
		bala1->SetImgFonte(0, 39, 11);
		break;
	case OF_KEY_LEFT:
		bala1->PosDisparo(a1->GetPos(), 1);
		bala1->SetImgFonte(0, 39, 11);
		break;
	case OF_KEY_UP:
		bala1->PosDisparo(a1->GetPos(), 2);
		bala1->SetImgFonte(39, 11, 39);
		break;	
	case OF_KEY_DOWN:
		bala1->PosDisparo(a1->GetPos(), 3);
		bala1->SetImgFonte(39, 11, 39);
		break;

	case ' ':
		switch (estadoJogo)
		{
		case FASE01:
			if (nego->GetPos().x < 260 && nego->GetPos().y < 180)
			{
				nego->SetPos(145, 500);
				ini1[0]->SetPos(250, 400);
				ini1[0]->SetVida(-3 + ini1[0]->GetVida());
				ini1[0]->SetVivo(true);
				for (int i = 1; i < 3; i++)
					ini1[i] = new Inimigo(170 + rand() % 400, 170 + rand() % 300, "inimigo1.png", 3);
				ter->TrocarArquivo("Caverna2.png");
				estadoJogo = FASE02;
			}
			break;

		case FASE02:
			if (nego->GetPos().x > 510 && nego->GetPos().y < 180)
			{
				nego->SetPos(145, 500);
				boss = new Inimigo(170 + rand() % 400, 170 + rand() % 300, "boss.png", 20);
				boss->SetImgFonte(0, 19, 31);
				for (int i = 0; i < 3; i++)
				{
					delete ini1[i];
					ini1[i] = nullptr;
				}
				ter->TrocarArquivo("SalaBoss.png");
				estadoJogo = BOSS;
			}
			break;
		}
		break;
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
	if (key == 'a' || key == 'd')
		nego->SetMoverHorizontal(0);
	if (key == 'w' || key == 's')
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
