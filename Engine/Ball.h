#pragma once
#include "Vec2.h"
#include "SpriteCodex.h"
#include "Graphics.h"
#include "FrameTimer.h"

class Ball
{



public:
	Ball() = default;
	Ball(Vec2 pos_in, Vec2 vel_in);

	void DrawBall(Graphics& gfx);
	void UpdateBall(float dt);


private:

	const float radius = 7.0f;
	Vec2 pos = { 50, 50 };
	Vec2 vel = { 25, 25 };




};

