#pragma once
#include "DesenhoBase.h"

class Bala :public DesenhoBase
{
private:
	bool m_atirar = false;
	int m_direcao, m_escala;
public:
	Bala(int x, int y, string diretorio, int escala, int imgLarg, int imgAlt);
	~Bala();

	void PosDisparo(ofVec2f& pos, int direcao);
	bool GetAtirando();
	void SetAtirando(bool atirar);
	void Mover();
	void Desenhar();

	ofVec2f& GetPos();
};