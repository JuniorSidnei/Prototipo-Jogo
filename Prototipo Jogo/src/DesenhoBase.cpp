#include "DesenhoBase.h"



DesenhoBase::DesenhoBase(int x, int y, string diretorio)
{
	m_pos.set(x, y);
	m_img.load(diretorio);
}


DesenhoBase::~DesenhoBase()
{
}


