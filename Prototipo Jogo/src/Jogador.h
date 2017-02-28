#pragma once
#include "DesenhoBase.h"

#define LARGURA_IMG_JOGADOR 64
#define ALTURA_IMG_JOGADOR 98

class Jogador:public DesenhoBase
{
private:
	short int m_horizontalMove = 0, m_verticalMove = 0, m_timeInvul = 0;
	float m_posAnteriorX, m_posAnteriorY;
	short int m_vida = 3;
	bool m_vivo = true, m_invul = false;
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

	void SetVida(short int perdaVida);
	short int GetVida();

	void SetVivo(bool vivo);
	bool GetVivo();

	void SetInvul(bool invul);
	void TimeInvul();
	bool GetInvul();
};

