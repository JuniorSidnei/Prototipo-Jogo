#pragma once
#include "DesenhoBase.h"

#define LARGURA_IMG_JOGADOR 64
#define ALTURA_IMG_JOGADOR 98

class Jogador:public DesenhoBase
{
private:
	short int m_horizontalMove = 0, m_verticalMove = 0;
	float m_posAnteriorX, m_posAnteriorY;
public:
	Jogador(int x, int y, string diretorio);
	~Jogador();

	void SetMoverHorizontal(short int x);
	void SetMoverVertical(short int y);

	void Mover(int tempo);

	/// <summary>
	/// Apenas Desenhar a arma
	/// </summary>
	void Desenhar();

	ofVec2f & GetPos();
};

