#include "Enemy.h"



Enemy::Enemy() : ZeroSprite("Resource/Sprite/Laser.png")
{
}


Enemy::~Enemy()
{
}

void Enemy::Update(float eTime)
{
	ZeroSprite::Update(eTime);
}

void Enemy::Render()
{
	ZeroSprite::Render();
}
