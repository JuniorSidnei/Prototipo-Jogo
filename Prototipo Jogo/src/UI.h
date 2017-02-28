#pragma once
#include "DesenhoBase.h"

class UI :public DesenhoBase
{
private:
public:
	/// <summary>
	/// Criando Objeto
	/// </summary>
	/// <param name="x">Informar a posição X inicial</param>
	/// <param name="y">Informar a posição Y inicial</param>
	/// <param name="diretorio">Informar o nome do Arquivo Imagem com extensão</param>
	/// <param name="imgLarg">Informar a Largura em pixels da imagem no arquivo fonte</param>
	/// <param name="imgAlt">Informar a Altura em pixels da imagem no arquivo fonte</param>
	UI(int x, int y, string diretorio, short int largImg, short int altImg);
	~UI();
	void Desenhar();
};