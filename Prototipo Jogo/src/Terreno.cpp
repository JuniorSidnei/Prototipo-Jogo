#include "Terreno.h"

Terreno::Terreno(int x, int y, string diretorio) :DesenhoBase(x, y, diretorio)
{
}

Terreno::~Terreno()
{
}

void Terreno::TrocarArquivo(string diretorio)
{
	m_img.load(diretorio);
}

void Terreno::Desenhar()
{
	m_img.draw(0, 0, 800, 600);
}
