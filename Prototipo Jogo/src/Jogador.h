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
	/// <param name="x">Informar a posi��o X inicial</param>
	/// <param name="y">Informar a posi��o Y inicial</param>
	/// <param name="diretorio">Informar o nome do Arquivo Imagem com extens�o</param>
	Jogador(int x, int y, string diretorio);
	~Jogador();

	/// <summary>
	/// Determinar se est� se movimentando na horizontal
	/// </summary>
	/// <param name="x">-1) Esquerda, 1) Direita</param>
	void SetMoverHorizontal(short int x);
	/// <summary>
	/// Determinar se est� se movimentando na Vertical
	/// </summary>
	/// <param name="y">-1) Cima, 1) Baixo</param>
	void SetMoverVertical(short int y);

	/// <summary>
	/// Update de movimenta��o do Jogador
	/// </summary>
	/// <param name="tempo">Serve como multiplicador de velocidade</param>
	void Mover(int tempo);

	/// <summary>
	/// Apenas Desenhar
	/// </summary>
	void Desenhar();

	/// <summary>
	/// Obeter o vetor da posi��o do jogador
	/// </summary>
	ofVec2f & GetPos();

	/// <summary>
	/// Determinar a perda de Vida
	/// </summary>
	/// <param name="perdaVida">Informar um n�mero NATURAL (ou seja, inteiro sem sinal)</param>
	void SetVida(short int perdaVida);
	/// <summary>
	/// Obter a quantidade de Vida
	/// </summary>
	short int GetVida();

	/// <summary>
	/// Determinar se o Jogador est� vivo
	/// </summary>
	void SetVivo(bool vivo);
	/// <summary>
	/// Obter se est� vivo ou morto
	/// </summary>
	bool GetVivo();

	/// <summary>
	/// Determinar se est� invulneravel
	/// </summary>
	void SetInvul(bool invul);
	/// <summary>
	/// Tempo de invulnerabilidade
	/// </summary>
	void TimeInvul();
	/// <summary>
	/// Obter a situa��o de invulnerabilidade
	/// </summary>
	bool GetInvul();
};

