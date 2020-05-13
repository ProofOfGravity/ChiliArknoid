#pragma once
#include "RectF.h"
#include "Ball.h"
#include "Vec2.h"
#include "Graphics.h"
#include "Colors.h"

class Walls
{

public:
	Walls() = default;

	void DrawWalls(Graphics& gfx);


public:

	RectF left{ 0.0f, float(Graphics::ScreenHeight), 100.0f, 120.0f };
	RectF right{ 0.0f, float(Graphics::ScreenHeight), 650.0f, 670.0f };
	RectF top{ 0.0f, 20.0f, 100.0f, 650.0f };
	RectF bottom{ float(Graphics::ScreenHeight - 20), float(Graphics::ScreenHeight), 120.0f, 650.0f };

	Color wallColor = Colors::Magenta;
	Color bottomColor = Colors::Black;


};

