#pragma once
#include "RectF.h"
#include "Graphics.h"
#include "Vec2.h"
#include "Colors.h"

class Paddle
{

public:

	Paddle() = default;

	void UpdatePaddlePosition(float poschange, float dt);
	void DrawPaddle(Graphics& gfx);
	RectF GetPaddleRect();

	float GetPaddleWidth();
	Vec2 GetPaddlePosition();

private:
	 

	Vec2 position = { 200, Graphics::ScreenHeight - 60 };
	float width = 75.0f;
	float height = 20.0f;
	Color mainPaddleColor = Colors::Red;
};

