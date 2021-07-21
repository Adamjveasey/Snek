#include "Border.h"
#include "Helpers.h"

Border::Border()
{
	m_sizeX = 0;
	m_sizeY = 0;
}

Border::~Border()
{

}

// If no value of sizeY is given the border becomes a square
void Border::set(int sizeX, int sizeY /*= 0*/)
{
	if (sizeY == 0)
	{
		m_sizeX = sizeX;
		m_sizeY = sizeX;
	}
	else
	{
		m_sizeX = sizeX;
		m_sizeY = sizeY;
	}

	buildWalls();
}

void Border::render()
{
	for (int i = 0; i < 4; i++)
	{
		m_walls[i].render();
	}

	// Fills in bottom right corner gap
	drawChar('X', m_sizeX, m_sizeY);
}

int Border::getSizeX()
{
	return m_sizeX;
}

int Border::getSizeY()
{
	return m_sizeY;
}

void Border::buildWalls()
{
	m_walls[0].set(Vector2(0, 0), m_sizeX, false);
	m_walls[1].set(Vector2(0, 0), m_sizeY, true);
	m_walls[2].set(Vector2(0, m_sizeY), m_sizeX, false);
	m_walls[3].set(Vector2(m_sizeX, 0), m_sizeY, true);
}