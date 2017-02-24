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
public:
	Inimigo(int x, int y, string diretorio);
	~Inimigo();

	/// <summary>
	/// Colisão com os outros objetos
	/// </summary>
	/// <param name="pos">Informar as posição do outro objeto</param>
	/// <param name="number">0->Jogador,   1->Bala</param>
	void Colidir(Jogador* jog);
	void Colidir(Bala* bala);
	void Mover();
	void Desenhar();
	
	bool GetVivo();
	void SetVivo(bool vivo);
};

