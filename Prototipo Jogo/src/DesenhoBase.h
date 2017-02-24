#pragma once
#include "ofImage.h"
#include "ofVec2f.h"
class DesenhoBase
{
protected:
	ofVec2f m_pos;
	ofImage m_img;
public:
	/// <summary>
	/// Criando Objeto
	/// </summary>
	/// <param name="x">Informar a posi��o X inicial</param>
	/// <param name="y">Informar a posi��o Y inicial</param>
	/// <param name="diretorio">Informar o nome do Arquivo Imagem com extens�o</param>
	DesenhoBase(int x, int y, string diretorio);
	~DesenhoBase();
	virtual void Desenhar() = 0;
};

