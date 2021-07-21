#ifndef CHAR_H
#define CHAR_H

#include "Vector2.h"

// -------------------------------------------------------------------------------
// Class Name		: Char
// Purpose			: A class for handling a single char with a position
// 
// Usage Examples	: Char myChar;
//					  myChar.setSymbol('A');
//			          myChar.setPosition(Vector2(20, 40));
//					  myChar.render();
// ------------------------------------------------------------------------------
class Char 
{
private:
	char m_symbol;		// Character to be displayed
	Vector2 m_position; // Vector2 for position in 2D space

public:
	// ----------------------------------------------------------------
	// Constructor		: Char()
	// Parameters		: None
	// Notes			: Initialises elements to 0
	// ----------------------------------------------------------------
	Char();

	// --------------------------------------------------------------------------
	// Function Name	: render()
	// Parameters		: None
	// Purpose			: To render the character in its position on the console
	// Returns			: None
	// See also			: 
	// --------------------------------------------------------------------------
	virtual void render();

	// --------------------------------------------------------------------------
	// Function Name	: setSymbol()
	// Parameters		: symbol - the desired character
	// Purpose			: To set m_symbol to the character given
	// Returns			: None
	// See also			: 
	// --------------------------------------------------------------------------
	void setSymbol(char symbol);

	// --------------------------------------------------------------------------
	// Function Name	: setPosition()
	// Parameters		: position - the desired coordinates
	// Purpose			: To set m_position to the coordinates given via Vector2
	// Returns			: None
	// See also			: 
	// --------------------------------------------------------------------------
	void setPosition(Vector2 position);

	// --------------------------------------------------------------------------
	// Function Name	: getPosition()
	// Parameters		: None
	// Purpose			: To get the position of the Char
	// Returns			: Vector2 (the current coordinates)
	// See also			: 
	// --------------------------------------------------------------------------
	Vector2 getPosition();

	// --------------------------------------------------------------------------
	// Function Name	: getSymbol()
	// Parameters		: None
	// Purpose			: To get the character of the Char
	// Returns			: char (the current character)
	// See also			: 
	// --------------------------------------------------------------------------
	char getSymbol();
};

#endif // #ifndef CHAR_H
