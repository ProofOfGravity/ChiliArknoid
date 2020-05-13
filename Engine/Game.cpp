/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd ),
    rec(25.0f, 50.0f, 50.0f, 100.0f)
 
{
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{

    float mark = ft.Mark();
    ball.UpdateBall(mark);
    float delta_loc = 0.0f;

    if (walls.left.IsOverlappingWith(ball.GetBallRect()) || walls.right.IsOverlappingWith(ball.GetBallRect()))
    {
        ball.Rebound_x();
    }

    if (walls.top.IsOverlappingWith(ball.GetBallRect()) || walls.bottom.IsOverlappingWith(ball.GetBallRect()))
    {
        ball.Rebound_y();
    }

    if (wnd.kbd.KeyIsPressed(VK_LEFT))
    {
        if (!walls.left.IsOverlappingWith(paddle.GetPaddleRect()))
        {
            delta_loc = -100.0f;
        }
    }
    if (wnd.kbd.KeyIsPressed(VK_RIGHT))
    {
        if (!walls.right.IsOverlappingWith(paddle.GetPaddleRect()))
        {
            delta_loc = 100.0f;
        }
    }

    if (paddle.GetPaddleRect().IsOverlappingWith(ball.GetBallRect()))
    {
        if (ball.GetBallPosition().x < paddle.GetPaddlePosition().x + paddle.GetPaddleWidth() && ball.GetBallPosition().x > paddle.GetPaddlePosition().x)
        {
            ball.Rebound_y();
        }
        else
        {
            ball.Rebound_x();
        }
    }

    paddle.UpdatePaddlePosition(delta_loc, mark);
    
}

void Game::ComposeFrame()
{
    
    ball.DrawBall(gfx);
    walls.DrawWalls(gfx);
    paddle.DrawPaddle(gfx);

}
