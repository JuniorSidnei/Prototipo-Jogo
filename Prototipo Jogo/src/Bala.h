#pragma once
#include "DesenhoBase.h"

class Bala :public DesenhoBase
{
private:
	bool m_atirar = false;
public:
	Bala(int x, int y, string diretorio);
	~Bala();

	void PosDisparo(ofVec2f& pos);
	bool GetAtirando();
	void SetAtirando(bool atirar);
	void Mover();
	void Desenhar();

	ofVec2f& GetPos();
};