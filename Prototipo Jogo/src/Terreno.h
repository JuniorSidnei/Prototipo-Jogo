#pragma once
#include "DesenhoBase.h"

class Terreno :public DesenhoBase
{
private:
public:
	Terreno(int x, int y, string diretorio);
	~Terreno();
	void TrocarArquivo(string diretorio);
	void Desenhar();
};