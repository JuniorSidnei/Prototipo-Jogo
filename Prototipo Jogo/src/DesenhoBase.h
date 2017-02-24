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
	/// <param name="x">Informar a posição X inicial</param>
	/// <param name="y">Informar a posição Y inicial</param>
	/// <param name="diretorio">Informar o nome do Arquivo Imagem com extensão</param>
	DesenhoBase(int x, int y, string diretorio);
	~DesenhoBase();
	virtual void Desenhar() = 0;
};

