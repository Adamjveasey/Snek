#ifndef BORDER_H
#define BORDER_H

#include "Wall.h"

// -------------------------------------------------------------------------------
// Class Name		: Border
// Purpose			: A class for drawing 4 Walls in a rectangle to form a border
// 
// Usage Examples	: border.set(50, 40);
//					  border.set(50);
//					  border.render();
//			          int x = border.getSizeX();
//					  int y = border.getSizeY();
// ------------------------------------------------------------------------------
class Border
{
private:
	int m_sizeX;		// The length of horizontal Walls 
	int m_sizeY;		// The length of vertical Walls
	Wall m_walls[4];	// Array of 4 Walls

	// --------------------------------------------------------------------------
	// Function Name	: buildWalls()
	// Parameters		: None
	// Purpose			: To set up the position of the walls according to sizes
	// Returns			: None
	// See also			: 
	// --------------------------------------------------------------------------
	void buildWalls();

public:
	// ----------------------------------------------------------------
	// Constructor		: Border()
	// Parameters		: None
	// Notes			: Initialises elements to 0
	// ----------------------------------------------------------------
	Border();
	~Border();

	// --------------------------------------------------------------------------
	// Function Name	: set()
	// Parameters		: sizeX - the desired value for m_sizeX
	//					  sizeY - the desired value for m_sizeY
	// Purpose			: To set up the sizes of the border to desired values
	// Returns			: None
	// See also			: 
	// --------------------------------------------------------------------------
	void set(int sizeX, int sizeY = 0);

	// --------------------------------------------------------------------------
	// Function Name	: render()
	// Parameters		: None
	// Purpose			: To render the border on the console
	// Returns			: None
	// See also			: 
	// --------------------------------------------------------------------------
	void render();

	// ----------------------------------------------------------------
	// Function Name	: getSizeX()
	// Parameters		: None
	// Purpose			: To get the value of m_sizeX
	// Returns			: int (the value of m_sizeX)
	// See also			: 
	// ----------------------------------------------------------------
	int getSizeX();

	// ----------------------------------------------------------------
	// Function Name	: getSizeY()
	// Parameters		: None
	// Purpose			: To get the value of m_sizeY
	// Returns			: int (the value of m_sizeY)
	// See also			: 
	// ----------------------------------------------------------------
	int getSizeY();
};

#endif // #ifndef BORDER_H

