#include "Paddle.h"

void Paddle::UpdatePaddlePosition(float poschange, float dt)
{
	if (position.x < 650 && position.x > 120)
	{
		position.x += poschange * dt;
	}

}

void Paddle::DrawPaddle(Graphics& gfx)
{
	gfx.DrawRect(RectF::GetRect(position, height / 2, width / 2), mainPaddleColor);
}

RectF Paddle::GetPaddleRect()
{
	return RectF::GetRect(position, height / 2, width / 2);
}
