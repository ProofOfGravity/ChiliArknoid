#pragma once
#include "Vec2.h"

class RectF
{

public:

	RectF() = default;
	RectF(float top_in, float bottom_in, float left_in, float right_in);
	RectF(Vec2 top_left, Vec2 bottom_right);
	RectF(Vec2 top_left, float width, float height);

	bool IsOverlappingWith(const RectF toCompare) const;


public:

	float top;
	float bottom;
	float left;
	float right;




};

