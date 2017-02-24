#include "Bala.h"

Bala::Bala(int x, int y, string diretorio) :DesenhoBase(x, y, diretorio)
{
}

Bala::~Bala()
{
}

void Bala::PosDisparo(ofVec2f & pos)
{
	m_atirar = true;
	//CALIBRANDO A POSIÇÃO DO DISPARO
	m_pos.x = pos.x + 9;
	m_pos.y = pos.y;
}

bool Bala::GetAtirando()
{
	return m_atirar;
}

void Bala::SetAtirando(bool atirar)
{
	m_atirar = atirar;
}

void Bala::Mover()
{
	m_pos.x += 20;
	if (m_pos.x > 655)
		m_atirar = false;

}

void Bala::Desenhar()
{
	m_img.draw(m_pos.x, m_pos.y);
}

ofVec2f & Bala::GetPos()
{
	return m_pos;
}
