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

	/// <summary>
	/// Determinar a posição na tela (e vetor tb)
	/// </summary>
	/// <param name="x">Informar a posição X</param>
	/// <param name="y">Informar a posição Y inicial</param>
	void SetPos(int x, int y);
	virtual void Desenhar() = 0;

	/// <summary>
	/// Selecionando outra imagem no arquivo fonte
	/// </summary>
	/// <param name="imgPosX">Informar a posição X em pixels no Arquivo</param>
	/// <param name="imgLarg">Informar a Largura em pixels da seleção da imagem</param>
	/// <param name="imgAlt">Informar a Altura em pixels da seleção da imagem</param>
	void SetImgFonte(int imgPosX, int imgLarg, int imgAlt);
	/// <summary>
	/// Selecionando outra imagem no arquivo fonte
	/// </summary>
	/// <param name="imgPosX">Informar a posição X em pixels no Arquivo</param>
	void SetImgFonte(int imgPosX);
};

