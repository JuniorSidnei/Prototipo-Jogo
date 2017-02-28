#include "Bala.h"

Bala::Bala(int x, int y, string diretorio, int escala, int imgLarg, int imgAlt) :DesenhoBase(x, y, diretorio)
{
	m_escala = escala;
	m_ImgAlt = imgAlt;
	m_ImgLarg = imgLarg;
}

Bala::~Bala()
{
}

void Bala::PosDisparo(ofVec2f & pos, int direcao)
{
	m_atirar = true;
	m_direcao = direcao;
	//CALIBRANDO A POSIÇÃO DO DISPARO
	switch (m_direcao)
	{
	case 0:	//direita
		m_pos.x = pos.x + 9;
		m_pos.y = pos.y;
		break;
	case 1: //esquerda
		m_pos.x = pos.x - 20;
		m_pos.y = pos.y;
		break;
	case 2: //cima
		m_pos.x = pos.x;
		m_pos.y = pos.y - 60;
		break;
	case 3: //baixo
		m_pos.x = pos.x;
		m_pos.y = pos.y + 30;
		break;
	}
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
	switch (m_direcao)
	{
	case 0: //direita
		m_pos.x += 20;
		if (m_pos.x > 655)
			m_atirar = false;
		break;
	case 1://esquerda
		m_pos.x -= 20;
		if (m_pos.x < 140)
			m_atirar = false;
		break;
	case 2: //cima
		m_pos.y -= 20;
		if (m_pos.y < 140)
			m_atirar = false;
		break;
	case 3: // baixo
		m_pos.y += 20;
		if (m_pos.y > 600)
			m_atirar = false;
	}
}

void Bala::Desenhar()
{
	m_img.drawSubsection(m_pos.x, m_pos.y, m_ImgLarg * m_escala, m_ImgAlt * m_escala, m_ImgPosX, 0, m_ImgLarg, m_ImgAlt);
}


ofVec2f & Bala::GetPos()
{
	return m_pos;
}
