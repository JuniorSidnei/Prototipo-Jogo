#pragma once
#include "DesenhoBase.h"

#define LARGURA_IMG_JOGADOR 64
#define ALTURA_IMG_JOGADOR 98

class Jogador:public DesenhoBase
{
private:
	short int m_horizontalMove = 0, m_verticalMove = 0, m_timeInvul = 0;
	float m_posAnteriorX, m_posAnteriorY;
	short int m_vida = 3;
	bool m_vivo = true, m_invul = false;
public:
	/// <summary>
	/// Criando Objeto
	/// </summary>
	/// <param name="x">Informar a posição X inicial</param>
	/// <param name="y">Informar a posição Y inicial</param>
	/// <param name="diretorio">Informar o nome do Arquivo Imagem com extensão</param>
	Jogador(int x, int y, string diretorio);
	~Jogador();

	/// <summary>
	/// Determinar se está se movimentando na horizontal
	/// </summary>
	/// <param name="x">-1) Esquerda, 1) Direita</param>
	void SetMoverHorizontal(short int x);
	/// <summary>
	/// Determinar se está se movimentando na Vertical
	/// </summary>
	/// <param name="y">-1) Cima, 1) Baixo</param>
	void SetMoverVertical(short int y);

	/// <summary>
	/// Update de movimentação do Jogador
	/// </summary>
	/// <param name="tempo">Serve como multiplicador de velocidade</param>
	void Mover(int tempo);

	/// <summary>
	/// Apenas Desenhar
	/// </summary>
	void Desenhar();

	/// <summary>
	/// Obeter o vetor da posição do jogador
	/// </summary>
	ofVec2f & GetPos();

	/// <summary>
	/// Determinar a perda de Vida
	/// </summary>
	/// <param name="perdaVida">Informar um número NATURAL (ou seja, inteiro sem sinal)</param>
	void SetVida(short int perdaVida);
	/// <summary>
	/// Obter a quantidade de Vida
	/// </summary>
	short int GetVida();

	/// <summary>
	/// Determinar se o Jogador está vivo
	/// </summary>
	void SetVivo(bool vivo);
	/// <summary>
	/// Obter se está vivo ou morto
	/// </summary>
	bool GetVivo();

	/// <summary>
	/// Determinar se está invulneravel
	/// </summary>
	void SetInvul(bool invul);
	/// <summary>
	/// Tempo de invulnerabilidade
	/// </summary>
	void TimeInvul();
	/// <summary>
	/// Obter a situação de invulnerabilidade
	/// </summary>
	bool GetInvul();
};

