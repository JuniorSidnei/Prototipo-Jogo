#pragma once
#include "DesenhoBase.h"

class Bala :public DesenhoBase
{
private:
	bool m_atirar = false;
	int m_direcao, m_escala;
public:
	/// <summary>
	/// Criando Objeto
	/// </summary>
	/// <param name="x">Informar a posição X inicial</param>
	/// <param name="y">Informar a posição Y inicial</param>
	/// <param name="diretorio">Informar o nome do Arquivo Imagem com extensão</param>
	///	<param name="escala">Informar a escala do desenho (deixar maior ou menor que no arquivo original</param>
	/// <param name="imgLarg">Informar a Largura em pixels da imagem no arquivo fonte</param>
	/// <param name="imgAlt">Informar a Altura em pixels da imagem no arquivo fonte</param>
	Bala(int x, int y, string diretorio, int escala, int imgLarg, int imgAlt);
	~Bala();

	/// <summary>
	/// Determinando a posição de disparo da Bala
	/// </summary>
	/// <param name="pos">Passar um objeto de referência (preferencialmente arma)</param>
	/// <param name="direcao">Informar para qual direção saira a bala (0 - direita, 1 - esquerda, 2 - cima, 3 - baixo)</param>
	void PosDisparo(ofVec2f& pos, int direcao);
	/// <summary>
	/// Verificar se a bala foi lançada
	/// </summary>
	bool GetAtirando();
	/// <summary>
	/// Determinando se a bala foi lançada 
	/// </summary>
	void SetAtirando(bool atirar);
	/// <summary>
	/// Update de movimentação da bala
	/// </summary>
	void Mover();
	void Desenhar();

	/// <summary>
	/// Obeter o vetor da posição da bala
	/// </summary>
	ofVec2f& GetPos();
};