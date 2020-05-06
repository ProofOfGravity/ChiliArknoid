#include "RectF.h"

RectF::RectF(float top_in, float bottom_in, float left_in, float right_in) 
	:
	top(top_in),
	bottom(bottom_in),
	left(left_in),
	right(right_in)
{
}

RectF::RectF(Vec2 top_left, Vec2 bottom_right) 
	:
	RectF(top_left.y, bottom_right.y, top_left.x, bottom_right.x)
{
}

RectF::RectF(Vec2 top_left, float width, float height)
	:
	RectF(top_left.y, top_left.y + height, top_left.x, top_left.x + width)
{
}

bool RectF::IsOverlappingWith(const RectF toCompare) const
{
	return right > toCompare.left && top < toCompare.bottom
		&& left < toCompare.right && bottom > toCompare.top;
}

void RectF::Draw(Graphics& gfx, Color c)
{

	gfx.DrawRect(int(left), int(top), int(right), int(bottom), c);


}
