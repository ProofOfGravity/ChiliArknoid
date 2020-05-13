#include "Paddle.h"

void Paddle::UpdatePaddlePosition(float poschange, float dt)
{
	position.x += poschange * dt;

}

void Paddle::DrawPaddle(Graphics& gfx)
{
	gfx.DrawRect(RectF(position, width, height), mainPaddleColor);
}

RectF Paddle::GetPaddleRect()
{
	return RectF(position, width, height);
}

float Paddle::GetPaddleWidth()
{
	return width;
}

Vec2 Paddle::GetPaddlePosition()
{
	return position;
}
