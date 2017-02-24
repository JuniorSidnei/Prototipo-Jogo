#include "Jogador.h"



Jogador::Jogador(int x, int y, string diretorio):DesenhoBase(x, y, diretorio)
{
}


Jogador::~Jogador()
{
}

void Jogador::SetMoverHorizontal(short int x)
{
	m_horizontalMove = x;
}

void Jogador::SetMoverVertical(short int y)
{
	m_verticalMove = y;
}

void Jogador::Mover(int tempo)
{
	if (m_pos.x > 142 && m_pos.x < 650)
	{
		m_posAnteriorX = m_pos.x;
		m_pos.x += (int)m_horizontalMove * 1.00f * tempo;
	}
	else
		m_pos.x = m_posAnteriorX;

	if (m_pos.y > 160 && m_pos.y <= 500)
	{
		m_posAnteriorY = m_pos.y;
		m_pos.y += (int)m_verticalMove * 1 * tempo;
	}
	else
		m_pos.y = m_posAnteriorY;
}

void Jogador::Desenhar()
{
	m_img.draw(m_pos.x, m_pos.y, LARGURA_IMG_JOGADOR, ALTURA_IMG_JOGADOR);
}

ofVec2f & Jogador::GetPos()
{
	return m_pos;
}
