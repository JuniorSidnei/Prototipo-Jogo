#include "Arma.h"



Arma::Arma(int x, int y, string diretorio):DesenhoBase(x+22,y+31,diretorio)
{
}


Arma::~Arma()
{
}

void Arma::SetMoverHorizontal(short int x)
{
	m_horizontalMove = x;
}

void Arma::SetMoverVertical(short int y)
{
	m_verticalMove = y;
}

ofVec2f & Arma::GetPos()
{
	return m_pos;
}

void Arma::Mover(ofVec2f& pos)
{
	m_pos.x = pos.x + 44;
	m_pos.y = pos.y + 62;
}

void Arma::Desenhar()
{
	m_img.draw(m_pos.x, m_pos.y, 18, 12);
}
