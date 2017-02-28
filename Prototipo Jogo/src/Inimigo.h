#pragma once
#include"DesenhoBase.h"
#include "Jogador.h"
#include "Bala.h"

#define ESCALA_DESENHO_INIMIGO 6

class Inimigo :public DesenhoBase
{
private:
	float m_posHoriAnterior = 0, m_posVertAnterior = 0;
	bool m_vivo = true;
	short int m_vida;
public:
	Inimigo(int x, int y, string diretorio, short int vida);
	~Inimigo();

	/// <summary>
	/// Colisão com os outros objetos
	/// </summary>
	void Colidir(Jogador* jog);
	virtual void Colidir(Bala* bala);
	void Mover();
	void Desenhar();
	
	bool GetVivo();
	void SetVivo(bool vivo);

	int GetVida();
	void SetVida(short int perdaVida);
};

