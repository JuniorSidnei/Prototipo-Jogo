#include "Inimigo.h"



Inimigo::Inimigo(int x, int y, string diretorio, short int vida):DesenhoBase(x,y,diretorio)
{
	m_vida = vida;
}


Inimigo::~Inimigo()
{
}

void Inimigo::Colidir(Jogador* jog)
{
	if(!jog->GetInvul())
		if (m_pos.y <= jog->GetPos().y + ALTURA_IMG_JOGADOR*0.75f && m_pos.y + 15 * ESCALA_DESENHO_INIMIGO*0.75f >= jog->GetPos().y)
			if (m_pos.x <= jog->GetPos().x + LARGURA_IMG_JOGADOR*0.9f && m_pos.x + 10 * ESCALA_DESENHO_INIMIGO >= jog->GetPos().x + 0.1f * LARGURA_IMG_JOGADOR)
			{
				jog->SetVida(1);
				jog->SetInvul(true);
			}
}

void Inimigo::Colidir(Bala * bala)
{
	switch (bala->GetAtirando())
		case true:
			if (m_pos.y <= bala->GetPos().y+ 11 * 0.9f && m_pos.y + 15 * ESCALA_DESENHO_INIMIGO*0.9f >= bala->GetPos().y)
				if (m_pos.x <= bala->GetPos().x + 39 * 0.9f && m_pos.x + 10 * ESCALA_DESENHO_INIMIGO >= bala->GetPos().x + 0.1f * 39)
				{
					SetVida(1);
					bala->SetAtirando(false);
				}
}

void Inimigo::Mover()
{
	if (m_pos.x > 160 && m_pos.x < 650)
	{
		m_posHoriAnterior = m_pos.x;
		m_pos.x += rand() % 7 - 3; //varia de -3 a 3
	}
	else
		m_pos.x = m_posHoriAnterior;
	if (m_pos.y > 160 && m_pos.y <= 500)
	{
		m_posVertAnterior = m_pos.y;
		m_pos.y += rand() % 7 - 3; //varia de -3 a 3
	}
	else
		m_pos.y = m_posVertAnterior;
}

void Inimigo::Desenhar()
{
	m_img.draw(m_pos.x, m_pos.y, 10 * ESCALA_DESENHO_INIMIGO, 15 * ESCALA_DESENHO_INIMIGO);
}

bool Inimigo::GetVivo()
{
	return m_vivo;
}

void Inimigo::SetVivo(bool vivo)
{
	m_vivo = vivo;
}

int Inimigo::GetVida()
{
	return m_vida;
}

void Inimigo::SetVida(short int perdaVida)
{
	m_vida -= perdaVida;
	if (m_vida <= 0)
		SetVivo(false);
}
