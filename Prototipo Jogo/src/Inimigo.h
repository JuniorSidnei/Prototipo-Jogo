#pragma once
#include"DesenhoBase.h"
#include "Jogador.h"
#include "Bala.h"

#define ESCALA_DESENHO_INIMIGO 6

class Inimigo :public DesenhoBase
{
private:
	float m_posHoriAnterior = 0, m_posVertAnterior = 0;
	bool m_vivo = true;
	short int m_vida;
public:
	/// <summary>
	/// Criando Objeto
	/// </summary>
	/// <param name="x">Informar a posi��o X inicial</param>
	/// <param name="y">Informar a posi��o Y inicial</param>
	/// <param name="diretorio">Informar o nome do Arquivo Imagem com extens�o</param>
	/// <param name="vida">Informar quanto de vida ter� o inimigo</param>
	Inimigo(int x, int y, string diretorio, short int vida);
	~Inimigo();

	/// <summary>
	/// Colis�o com os outros objetos
	/// </summary>
	/// <param name="jog">Vetor com a posi��o do Jogador</param>
	void Colidir(Jogador* jog);
	/// <summary>
	/// Colis�o com os outros objetos
	/// </summary>
	/// <param name="bala">Vetor com a posi��o da Bala</param>
	virtual void Colidir(Bala* bala);
	/// <summary>
	/// Update de movimenta��o do Inimigo
	/// </summary>
	void Mover();
	/// <summary>
	/// Desenhar o inimigo
	/// </summary>
	void Desenhar();
	
	/// <summary>
	/// Obter se est� vivo ou n�o o inimigo
	/// </summary>
	bool GetVivo();
	/// <summary>
	/// Determinar se est� vivo ou n�o o inimigo
	/// </summary>
	void SetVivo(bool vivo);

	/// <summary>
	/// Obter a quantidade de vida do inimigo
	/// </summary>
	int GetVida();
	/// <summary>
	/// Determinar a perda de Vida
	/// </summary>
	/// <param name="perdaVida">Informar um n�mero NATURAL (ou seja, inteiro sem sinal)</param>
	void SetVida(short int perdaVida);
};

