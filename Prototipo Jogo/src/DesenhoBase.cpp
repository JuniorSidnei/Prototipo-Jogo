#include "DesenhoBase.h"



DesenhoBase::DesenhoBase(int x, int y, string diretorio)
{
	m_pos.set(x, y);
	m_img.load(diretorio);
}


DesenhoBase::~DesenhoBase()
{
}

void DesenhoBase::SetPos(int x, int y)
{
	m_pos.x = x;
	m_pos.y = y;
}

void DesenhoBase::SetImgFonte(int imgPosX, int imgLarg, int imgAlt)
{
	m_ImgAlt = imgAlt;
	m_ImgLarg = imgLarg;
	m_ImgPosX = imgPosX;
}

void DesenhoBase::SetImgFonte(int imgPosX)
{
	m_ImgPosX = imgPosX;
}