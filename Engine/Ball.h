#pragma once
#include "Vec2.h"
#include "SpriteCodex.h"
#include "Graphics.h"
#include "FrameTimer.h"
#include "RectF.h"

class Ball
{



public:
	Ball() = default;
	Ball(Vec2 pos_in, Vec2 vel_in);

	void DrawBall(Graphics& gfx);
	void UpdateBall(float dt);

	void Rebound_x();
	void Rebound_y();

	RectF GetBallRect();

	Vec2 GetBallPosition();


private:

	const float radius = 7.0f;
	Vec2 pos = { 200, 350 };
	Vec2 vel = { 50, 50 };




};

