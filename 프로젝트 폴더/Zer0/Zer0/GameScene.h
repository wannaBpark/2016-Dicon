#pragma once
#include "ZeroIScene.h"
#include "ZeroSprite.h"
#include "ZeroAnimation.h"
#include "Laser.h"

class GameScene :	public ZeroIScene
{
public:
	GameScene();
	~GameScene();

	void Update(float eTime);
	void Render();

	ZeroSprite *spr;
	ZeroAnimation *ani;
	ZeroAnimation *ani2;
};

