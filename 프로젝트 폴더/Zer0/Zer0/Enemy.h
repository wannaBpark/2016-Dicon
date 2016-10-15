#pragma once
#include "ZeroSprite.h"
class Enemy :
	public ZeroSprite
{
public:
	Enemy();
	~Enemy();
public:
	void Update(float eTime);
	void Render();
};

