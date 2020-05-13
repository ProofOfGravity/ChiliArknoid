#include "Walls.h"

void Walls::DrawWalls(Graphics& gfx)
{

	gfx.DrawRect(left, wallColor);
	gfx.DrawRect(right, wallColor);
	gfx.DrawRect(top, wallColor);
	gfx.DrawRect(bottom, bottomColor);

}
