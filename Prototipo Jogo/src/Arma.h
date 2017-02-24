#pragma once
#include "DesenhoBase.h"
class Arma:public DesenhoBase
{
private:
	short int m_horizontalMove = 0, m_verticalMove = 0;
public:
	Arma(int x, int y, string diretorio);
	~Arma();

	/// <summary>
	/// Apenas para Mover
	/// </summary>
	/// <param name="x">Informar a pr�xima posi��o X</param>
	/// <param name="y">Informar a pr�xima posi��o Y </param>

	void SetMoverHorizontal(short int x);
	void SetMoverVertical(short int y);

	ofVec2f& GetPos();

	void Mover(ofVec2f& pos);

	/// <summary>
	/// Apenas Desenhar a arma
	/// </summary>
	void Desenhar();
};

