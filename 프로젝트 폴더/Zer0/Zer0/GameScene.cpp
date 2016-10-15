#include "GameScene.h"
#include "ZeroInputManager.h"


GameScene::GameScene()
{
	spr = new ZeroSprite("Sprite.png");
	PushScene(spr);

	ani = new ZeroAnimation(24.f);
	ani2 = new ZeroAnimation(60.f);
	/*for(int i=1; i<=28; ++i)
		ani->PushSprite("Resource/Skill_Magician_D%04d.png",i);*/
	
	for (int i = 1; i <= 36; i++)
		ani2->PushSprite("Resource/%d.png", i);
	

	PushScene(ani);
	PushScene(ani2);
	ani2->AddPosX(20);
}


GameScene::~GameScene()
{
}

void GameScene::Update(float eTime)
{
	ZeroIScene::Update(eTime);

	if (ZeroInputMgr->GetKey(VK_LEFT) == INPUTMGR_KEYON)
	{
		spr->AddPos(-4, 0);
	}
	if (ZeroInputMgr->GetKey(VK_RIGHT) == INPUTMGR_KEYON)
	{
		spr->AddPos(200 * eTime, 0);
	}
	if (ZeroInputMgr->GetKey(VK_UP) == INPUTMGR_KEYON)
	{
		spr->AddPos(0, -2);
	}
	if (ZeroInputMgr->GetKey(VK_DOWN) == INPUTMGR_KEYON)
	{
		spr->AddPos(0, 2);
	}

	ani->AddPosX(0);
}
void GameScene::Render()
{
	ZeroIScene::Render();

	spr->Render();
	ani->Render();
	ani2->Render();
}

