#include "Laser.h"



Laser::Laser() :ZeroSprite("Resource/Sprite/Laser.png")
{
}


Laser::~Laser()
{

}

void Laser::Update(float eTime)
{
	ZeroSprite::Update(eTime);
}

void Laser::Render()
{
	ZeroSprite::Render();
}


