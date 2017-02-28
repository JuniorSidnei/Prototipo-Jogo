#include "UI.h"

UI::UI(int x, int y, string diretorio, short int largImg, short int altImg):DesenhoBase(x, y, diretorio)
{
	m_ImgLarg = largImg;
	m_ImgAlt = altImg;
}

UI::~UI()
{
}

void UI::Desenhar()
{
	m_img.draw(m_pos.x, m_pos.y, m_ImgLarg, m_ImgAlt);
}
