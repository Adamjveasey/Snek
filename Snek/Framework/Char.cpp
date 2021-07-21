#include "Helpers.h"
#include "Char.h"

Char::Char()
{
	m_symbol = '0';
}

void Char::render()
{
	drawChar(m_symbol, m_position.x, m_position.y);
}

void Char::setSymbol(char symbol)
{
	m_symbol = symbol;
}

void Char::setPosition(Vector2 position)
{
	m_position = position;
}

Vector2 Char::getPosition()
{
	return m_position;
}

char Char::getSymbol()
{
	return m_symbol;
}

