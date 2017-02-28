#pragma once
#include "DesenhoBase.h"
class Arma:public DesenhoBase
{
private:
	short int m_horizontalMove = 0, m_verticalMove = 0;
public:
	/// <summary>
	/// Criando Objeto
	/// </summary>
	/// <param name="x">Informar a posi��o X inicial</param>
	/// <param name="y">Informar a posi��o Y inicial</param>
	/// <param name="diretorio">Informar o nome do Arquivo Imagem com extens�o</param>
	Arma(int x, int y, string diretorio);
	~Arma();

	/// <summary>
	/// Obeter o vetor da posi��o da arma
	/// </summary>
	ofVec2f& GetPos();

	/// <summary>
	/// Update de movimenta��o da arma
	/// </summary>
	/// <param name="pos">Informar o vetor de refer�ncia para acompanhar</param>
	void Mover(ofVec2f& pos);

	/// <summary>
	/// Apenas Desenhar a arma
	/// </summary>
	void Desenhar();
};

