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
	/// <param name="x">Informar a posição X inicial</param>
	/// <param name="y">Informar a posição Y inicial</param>
	/// <param name="diretorio">Informar o nome do Arquivo Imagem com extensão</param>
	/// <param name="vida">Informar quanto de vida terá o inimigo</param>
	Inimigo(int x, int y, string diretorio, short int vida);
	~Inimigo();

	/// <summary>
	/// Colisão com os outros objetos
	/// </summary>
	/// <param name="jog">Vetor com a posição do Jogador</param>
	void Colidir(Jogador* jog);
	/// <summary>
	/// Colisão com os outros objetos
	/// </summary>
	/// <param name="bala">Vetor com a posição da Bala</param>
	virtual void Colidir(Bala* bala);
	/// <summary>
	/// Update de movimentação do Inimigo
	/// </summary>
	void Mover();
	/// <summary>
	/// Desenhar o inimigo
	/// </summary>
	void Desenhar();
	
	/// <summary>
	/// Obter se está vivo ou não o inimigo
	/// </summary>
	bool GetVivo();
	/// <summary>
	/// Determinar se está vivo ou não o inimigo
	/// </summary>
	void SetVivo(bool vivo);

	/// <summary>
	/// Obter a quantidade de vida do inimigo
	/// </summary>
	int GetVida();
	/// <summary>
	/// Determinar a perda de Vida
	/// </summary>
	/// <param name="perdaVida">Informar um número NATURAL (ou seja, inteiro sem sinal)</param>
	void SetVida(short int perdaVida);
};

