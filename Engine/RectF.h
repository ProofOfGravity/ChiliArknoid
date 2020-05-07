#pragma once
#include "Vec2.h"
#include "Colors.h"

class RectF
{

public:

	RectF() = default;
	RectF(float top_in, float bottom_in, float left_in, float right_in);
	RectF(Vec2 top_left, Vec2 bottom_right);
	RectF(Vec2 top_left, float width, float height);

	bool IsOverlappingWith(const RectF toCompare) const;
	static RectF GetRect(Vec2 pos, float halfHeight, float halfWidth);


public:

	float top;
	float bottom;
	float left;
	float right;


};

