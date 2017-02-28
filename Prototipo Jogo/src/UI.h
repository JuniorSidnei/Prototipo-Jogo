#pragma once
#include "DesenhoBase.h"

class UI :public DesenhoBase
{
private:
	short int m_largImg, m_altImg;
public:
	UI(int x, int y, string diretorio, short int largImg, short int altImg);
	~UI();
	void Desenhar();
};