#pragma once
#include "ofImage.h"
#include "ofVec2f.h"
class DesenhoBase
{
protected:
	ofVec2f m_pos;
	ofImage m_img;
	int m_ImgAlt, m_ImgLarg, m_ImgPosX;
public:
	/// <summary>
	/// Criando Objeto
	/// </summary>
	/// <param name="x">Informar a posição X inicial</param>
	/// <param name="y">Informar a posição Y inicial</param>
	/// <param name="diretorio">Informar o nome do Arquivo Imagem com extensão</param>
	DesenhoBase(int x, int y, string diretorio);
	~DesenhoBase();

	void SetPos(int x, int y);
	virtual void Desenhar() = 0;

	void SetImgFonte(int imgPosX, int imgLarg, int imgAlt);
	void SetImgFonte(int imgPosX);
};

