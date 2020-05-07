#include "Ball.h"
#include "Ball.h"

Ball::Ball(Vec2 pos_in, Vec2 vel_in)
	:
	pos(pos_in),
	vel(vel_in)
{
}

void Ball::DrawBall(Graphics& gfx)
{


	SpriteCodex::DrawBall(pos, gfx);


}

void Ball::UpdateBall(float dt)
{
	pos += vel * dt;
}

void Ball::Rebound_x()
{
	vel.x = -vel.x;
}

void Ball::Rebound_y()
{
	vel.y = -vel.y;
}

RectF Ball::GetBallRect()
{
	return RectF::GetRect(pos, radius, radius);
}
