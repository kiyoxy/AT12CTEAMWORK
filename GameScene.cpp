#include "GameScene.h"

//SetMapChipクラスのstaticメンバ変数の初期化
int GameScene::SetMapChip::stage[STAGEMAX] = { 320 };
int GameScene::SetMapChip::Stage1Blocktexinfo[SEPARATEHEIGHT][320]{
	//stage1ver
		{ -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0, },
		{ -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0, },
		{ -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0, },
		{ -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0, },
		{ -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0, },
		{ -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0, },
		{ -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0, },
		{ -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0, },
		{ -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
		{ -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
		{ -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
		{ -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
		{ -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,0,0,0,0,0,0,0,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
		{ -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,0,0,0,0,0,0,0,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
		{ -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,0,0,0,0,0,0,0,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,			-1,-1,-1,-1,0,0,0,0,0,0,0,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, 0,0,0,0,0,0,0,0,0,0,0,0,-1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,							  -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,			   -1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,					-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
};
float GameScene::SetMapChip::CameraCoord = SCREEN_WIDTH;

//Playerクラスのstaticメンバ変数の初期化
D3DVECTOR GameScene::Player::m_playerPosition = { 500,300,0 };



// GameSceneのコンストラクタ
GameScene::GameScene()
{
}

// GameSceneのデストラクタ
GameScene::~GameScene()
{
}

// GameSceneの初期化
void GameScene::Init(HWND *pHWND, LPDIRECT3DDEVICE9 *device, int *tex, POINT *pcl) {
	game.Init(pHWND, device, tex, pcl);				// 背景
	mapchip.InitMapchip(pHWND, device, tex, pcl);	//マップチップ
	player.Init(pHWND, device, tex, pcl);			//プレイヤー
}

// GameSceneの描画
void GameScene::Draw(LPDIRECT3DDEVICE9 *device)
{
	game.Draw(device);	  // 背景
	mapchip.DrawMapchip(device);	//マップチップ
	player.Draw(device);
}

// GameSceneの更新
void GameScene::Update(int *scene)
{
	game.Update();		   // 背景
	player.Update(scene);
}

// GameSceneの解放
void GameScene::Uninit(void)
{
	game.Uninit(); 	  // 背景
	mapchip.Uninit();	//マップチップ
	player.Uninit();
}

// 背景のコンストラクタ
GameScene::Game::Game()
{
}

// 背景のデストラクタ
GameScene::Game::~Game()
{
}

// 背景の初期化
void GameScene::Game::Init(HWND *pHWND, LPDIRECT3DDEVICE9 *device, int *tex, POINT *pcl)
{
	// テクスチャ描画(背景)
	if (FAILED(D3DXCreateTextureFromFile(*device, "rom/Pic/46.jpg", &m_game_pD3DTexture)) == 1) {
		// メッセージBOXで「テクスチャロード失敗」と表示
		*tex = MessageBox(*pHWND, "背景のテクスチャロード失敗", "失敗", MB_YESNO);
		if (*tex == IDYES)
		{
			DestroyWindow(*pHWND);
		}
	}
}

// 背景の描画	
void GameScene::Game::Draw(LPDIRECT3DDEVICE9 *device)
{
	// 背景
	VERTEX_2D game_vertex[4] = {
	{0,0,0,1,D3DCOLOR_ARGB(255,255,255,255),0,0},
	{SCREEN_WIDTH,0,0,1,D3DCOLOR_ARGB(255,255,255,255),1,0},
	{0,SCREEN_HEIGHT,0,1,D3DCOLOR_ARGB(255,255,255,255),0,1},
	{SCREEN_WIDTH,SCREEN_HEIGHT,0,1,D3DCOLOR_ARGB(255,255,255,255),1,1},
	};

	// 背景描画
	(*device)->SetFVF(FVF_VERTEX_2D);
	// テクスチャをポリゴンにセット
	(*device)->SetTexture(0, m_game_pD3DTexture);

	// g_pD3DDevice->DrawPrimitiveUPを呼ぶ
	(*device)->DrawPrimitiveUP(
		D3DPT_TRIANGLESTRIP, // ポリゴンの種類(三角、四角など)
		2,                   // ポリゴンの数
		&game_vertex[0],          // 頂点データ構造体の先頭アドレス
		sizeof(VERTEX_2D)    // 頂点データ構造体のサイズ
	);
}

// 背景の更新
void GameScene::Game::Update()
{
	// 空欄
}

// 背景の終了処理
void GameScene::Game::Uninit()
{
	// テクスチャの解放
	if (m_game_pD3DTexture != NULL)
	{
		m_game_pD3DTexture->Release();
		m_game_pD3DTexture = NULL;
	}
}

// 地面のコンストラクタ

void GameScene::GameScene::SetMapChip::InitMapchip(HWND *pHWND, LPDIRECT3DDEVICE9 *device, int *tex, POINT *pcl) {
	// テクスチャ描画(地面)
	if (FAILED(D3DXCreateTextureFromFile(*device, "rom/Pic/field002.jpg", &Blocktex[0])) == 1) {
		// メッセージBOXで「テクスチャロード失敗」と表示
		*tex = MessageBox(*pHWND, "地面のテクスチャロード失敗", "失敗", MB_YESNO);
		if (*tex == IDYES)
		{
			DestroyWindow(*pHWND);
		}
	}
}


void GameScene::SetMapChip::UpdateMapchip(int num) {		//引数：ロードしたいステージ番号	ステージが変わるときに使用!
	currentstagenum = num;							
	CameraCoord = SCREEN_WIDTH;						//ステージ座標初期化
}

void GameScene::SetMapChip::DrawMapchip(LPDIRECT3DDEVICE9 *device) {

	DrawBlock(*device);						//ブロック描画

}

void GameScene::SetMapChip::Uninit() {
	for (int i = 0; i < STAGEMAX; i++) {
		if (Blocktex[i] != NULL)
		{
			Blocktex[i]->Release();
			Blocktex[i] = NULL;
		}
	}
}

void GameScene::SetMapChip::DrawBlock(LPDIRECT3DDEVICE9 device) {

	switch (currentstagenum)							
	{
	case 1:
		for (int x = 0; x < stage[0]; x++) {
			for (int y = 0; y < SEPARATEHEIGHT; y++) {

				StageBlock[0].x = x * BLOCK_WIDTH - CameraCoord;
				StageBlock[0].y = y * BLOCK_HEIGHT;
				StageBlock[0].z = 0.0f;

				StageBlock[1].x = x * BLOCK_WIDTH + BLOCK_WIDTH - CameraCoord;
				StageBlock[1].y = y * BLOCK_HEIGHT;
				StageBlock[1].z = 0.0f;

				StageBlock[2].x = x * BLOCK_WIDTH - CameraCoord;
				StageBlock[2].y = y * BLOCK_HEIGHT + BLOCK_HEIGHT;
				StageBlock[2].z = 0.0f;

				StageBlock[3].x = x * BLOCK_WIDTH + BLOCK_WIDTH - CameraCoord;
				StageBlock[3].y = y * BLOCK_HEIGHT + BLOCK_HEIGHT;
				StageBlock[3].z = 0.0f;

				for (int i = 0; i <= 3; i++) {
					// RHWの値
					StageBlock[i].rhw = 1.0f;
					// ディフューズ色の設定
					StageBlock[i].col = D3DCOLOR_RGBA(COLOR_MAX, COLOR_MAX, COLOR_MAX, COLOR_MAX);
				}
				// テクスチャ座標(背景なので一枚)
				StageBlock[0].u = 0.0f;
				StageBlock[0].v = 0.0f;
				StageBlock[1].u = 1.0f;
				StageBlock[1].v = 0.0f;
				StageBlock[2].u = 0.0f;
				StageBlock[2].v = 1.0f;
				StageBlock[3].u = 1.0f;
				StageBlock[3].v = 1.0f;

				// 描画								画面上のみの描画をする
				(device)->SetFVF(FVF_VERTEX_2D);

				//if (StageBlock[0].x >= CameraCoord - SCREEN_WIDTH
				//					&& StageBlock[0].x <= CameraCoord) {			//スクリーン内にブロックがあるなら
					if (Stage1Blocktexinfo[y][x] != MAPCHIP::NONE) {					//何かブロックがあるなら
						//ブロックテクスチャセット
						(device)->SetTexture(0, Blocktex[Stage1Blocktexinfo[y][x]]);
						// g_pD3DDevice->DrawPrimitiveUPを呼ぶ
						(device)->DrawPrimitiveUP(
							D3DPT_TRIANGLESTRIP, // ポリゴンの種類(三角、四角など)
							2,                   // ポリゴンの数
							&StageBlock[0],          // 頂点データ構造体の先頭アドレス
							sizeof(VERTEX_2D)    // 頂点データ構造体のサイズ
						);
					}
				/*}*/
			}
		}
		break;
	default:
		break;
	}
}

void GameScene::SetMapChip::UpdateStageCoord() {
	if (CameraCoord - Player::m_playerPosition.x <= CameraCoord - SCREEN_WIDTH / SEPARATESCROLLNUM) {
		CameraCoord += BLOCK_WIDTH;
		Player::m_playerPosition.x -= KYARA_SPEED_MAX;
	}
	if (CameraCoord - Player::m_playerPosition.x >= CameraCoord - SCREEN_WIDTH / 5) {
		CameraCoord -= BLOCK_WIDTH;
		Player::m_playerPosition.x += KYARA_SPEED_MAX;
	}

}

//void GameScene::SetMapChip::SetTriangleTex(float x1, float y1, float x2, float y2, float x3, float y3, int texnum, LPDIRECT3DDEVICE9 device) {
//
//
//	StageBlock[0].x = x1;
//	StageBlock[0].y = y1;
//	StageBlock[0].z = 0;
//
//	StageBlock[1].x = x2;
//	StageBlock[1].y = y2;
//	StageBlock[1].z = 0;
//
//	StageBlock[2].x = x3;
//	StageBlock[2].y = y3;
//	StageBlock[2].z = 0;
//
//	for (int i = 0; i <= 2; i++) {
//		// RHWの値
//		StageBlock[i].rhw = 1.0f;
//		// ディフューズ色の設定
//		StageBlock[i].col = D3DCOLOR_RGBA(COLOR_MAX, COLOR_MAX, COLOR_MAX, COLOR_MAX);
//	}
//	// テクスチャ座標(背景なので一枚)
//	StageBlock[0].u = 0.0f;
//	StageBlock[0].v = 0.0f;
//	StageBlock[1].u = 1.0f;
//	StageBlock[1].v = 0.0f;
//	StageBlock[2].u = 0.0f;
//	StageBlock[2].v = 1.0f;
//	// 描画
//	(device)->SetFVF(FVF_VERTEX_2D);
//
//	//ノーマルブロックテクスチャセット
//	if (texnum == MAPCHIP::BLOCK) {
//		(device)->SetTexture(0, m_NormalBlocktex);
//		// g_pD3DDevice->DrawPrimitiveUPを呼ぶ
//		(device)->DrawPrimitiveUP(
//			D3DPT_TRIANGLESTRIP, // ポリゴンの種類(三角、四角など)
//			2,                   // ポリゴンの数
//			&StageBlock[0],          // 頂点データ構造体の先頭アドレス
//			sizeof(VERTEX_2D)    // 頂点データ構造体のサイズ
//		);
//	}
//}

// 三角形のマップチップ
void GameScene::SetMapChip::DrawDiagonalMapchip(LPDIRECT3DDEVICE9 device) {


}

// Playerのコンストラクタ
GameScene::Player::Player()
{
	
}

// Playerのデストラクタ
GameScene::Player::~Player()
{

}

// Player描画の初期化
void GameScene::Player::Init(HWND *pHWND, LPDIRECT3DDEVICE9 *device, int *tex, POINT *pcl)
{
	// Player描画(player)
	if (FAILED(D3DXCreateTextureFromFile(*device, "rom/Pic/5.png", &m_player_pD3DTexture)) == 1) {
		// メッセージBOXで「テクスチャロード失敗」と表示
		*tex = MessageBox(*pHWND, "playerのテクスチャロード失敗", "失敗", MB_YESNO);
		if (*tex == IDYES)
		{
			DestroyWindow(*pHWND);
		}
	}

	// Player描画(shield)
	if (FAILED(D3DXCreateTextureFromFile(*device, "rom/Pic/5.png", &m_shield_pD3DTexture)) == 1) {
		// メッセージBOXで「テクスチャロード失敗」と表示
		*tex = MessageBox(*pHWND, "shieldのテクスチャロード失敗", "失敗", MB_YESNO);
		if (*tex == IDYES)
		{
			DestroyWindow(*pHWND);
		}
	}

	// Player
	player_vertex[0].x = m_playerPosition.x;
	player_vertex[0].y = m_playerPosition.y;
	player_vertex[0].z = m_playerPosition.z;

	player_vertex[1].x = m_playerPosition.x + PLAYER_XSIZE;
	player_vertex[1].y = m_playerPosition.y;
	player_vertex[1].z = m_playerPosition.z;

	player_vertex[2].x = m_playerPosition.x;
	player_vertex[2].y = m_playerPosition.y + PLAYER_YSIZE;
	player_vertex[2].z = m_playerPosition.z;

	player_vertex[3].x = m_playerPosition.x + PLAYER_XSIZE;
	player_vertex[3].y = m_playerPosition.y + PLAYER_YSIZE;
	player_vertex[3].z = m_playerPosition.z;

	// RHWの値
	player_vertex[0].rhw = 1.0f;
	player_vertex[1].rhw = 1.0f;
	player_vertex[2].rhw = 1.0f;
	player_vertex[3].rhw = 1.0f;

	// ディフューズ色の設定
	player_vertex[0].col = D3DCOLOR_RGBA(COLOR_MAX, COLOR_MAX, COLOR_MAX, COLOR_MAX);
	player_vertex[1].col = D3DCOLOR_RGBA(COLOR_MAX, COLOR_MAX, COLOR_MAX, COLOR_MAX);
	player_vertex[2].col = D3DCOLOR_RGBA(COLOR_MAX, COLOR_MAX, COLOR_MAX, COLOR_MAX);
	player_vertex[3].col = D3DCOLOR_RGBA(COLOR_MAX, COLOR_MAX, COLOR_MAX, COLOR_MAX);

	// テクスチャ座標(3枚に切るため)
	player_vertex[0].u = 0.0f;
	player_vertex[0].v = 0.0f;
	player_vertex[1].u = 0.33f;
	player_vertex[1].v = 0.0f;
	player_vertex[2].u = 0.0f;
	player_vertex[2].v = 0.25f;
	player_vertex[3].u = 0.33f;
	player_vertex[3].v = 0.25f;

	// Shield
	shield_vertex[0].x = m_shieldPosistion.x;
	shield_vertex[0].y = m_shieldPosistion.y;

	shield_vertex[1].x = m_shieldPosistion.x + SHIELD_THICKNESS;
	shield_vertex[1].y = m_shieldPosistion.y;

	shield_vertex[2].x = m_shieldPosistion.x;
	shield_vertex[2].y = m_shieldPosistion.y + SHIELD_WIDTH;

	shield_vertex[3].x = m_shieldPosistion.x + SHIELD_THICKNESS;
	shield_vertex[3].y = m_shieldPosistion.y + SHIELD_WIDTH;

	// RHWの値
	shield_vertex[0].rhw = 1.0f;
	shield_vertex[1].rhw = 1.0f;
	shield_vertex[2].rhw = 1.0f;
	shield_vertex[3].rhw = 1.0f;

	// ディフューズ色の設定
	shield_vertex[0].col = D3DCOLOR_RGBA(COLOR_MAX, COLOR_MAX, COLOR_MAX, COLOR_MAX);
	shield_vertex[1].col = D3DCOLOR_RGBA(COLOR_MAX, COLOR_MAX, COLOR_MAX, COLOR_MAX);
	shield_vertex[2].col = D3DCOLOR_RGBA(COLOR_MAX, COLOR_MAX, COLOR_MAX, COLOR_MAX);
	shield_vertex[3].col = D3DCOLOR_RGBA(COLOR_MAX, COLOR_MAX, COLOR_MAX, COLOR_MAX);

	// テクスチャ座標(3枚に切るため)
	shield_vertex[0].u = 0.0f;
	shield_vertex[0].v = 0.0f;
	shield_vertex[1].u = 0.33f;
	shield_vertex[1].v = 0.0f;
	shield_vertex[2].u = 0.0f;
	shield_vertex[2].v = 0.25f;
	shield_vertex[3].u = 0.33f;
	shield_vertex[3].v = 0.25f;
}

// Playerの更新
void GameScene::Player::Update(int *scene)
{
	UpdateInput();
	//速度＋加速度
	PlayerSpeed.x += PlayerAddSpeed.x;
	PlayerSpeed.y += PlayerAddSpeed.y;

	//現在座標＋速度
	m_playerPosition.x += PlayerSpeed.x;
	m_playerPosition.y += PlayerSpeed.y;


	// Player
	player_vertex[0].x = m_playerPosition.x;
	player_vertex[0].y = m_playerPosition.y;
	player_vertex[0].z = m_playerPosition.z;

	player_vertex[1].x = m_playerPosition.x + PLAYER_XSIZE;
	player_vertex[1].y = m_playerPosition.y;
	player_vertex[1].z = m_playerPosition.z;

	player_vertex[2].x = m_playerPosition.x;
	player_vertex[2].y = m_playerPosition.y + PLAYER_YSIZE;
	player_vertex[2].z = m_playerPosition.z;

	player_vertex[3].x = m_playerPosition.x + PLAYER_XSIZE;
	player_vertex[3].y = m_playerPosition.y + PLAYER_YSIZE;
	player_vertex[3].z = m_playerPosition.z;

	// Shield
	shield_vertex[0].x = m_shieldPosistion.x;
	shield_vertex[0].y = m_shieldPosistion.y;

	shield_vertex[1].x = m_shieldPosistion.x + SHIELD_THICKNESS;
	shield_vertex[1].y = m_shieldPosistion.y;

	shield_vertex[2].x = m_shieldPosistion.x;
	shield_vertex[2].y = m_shieldPosistion.y + SHIELD_WIDTH;

	shield_vertex[3].x = m_shieldPosistion.x + SHIELD_THICKNESS;
	shield_vertex[3].y = m_shieldPosistion.y + SHIELD_WIDTH;

	//// XBOX
	////移動処理
	//// 右(-255と1の間の時は右へ動く)
	//if (GetXinputThumbLX(0) < 0)
	//{
	//	m_playerPosition.x -= KYARA_SPEED_MAX;
	//}
	//// 左(1と255の間の時は左へ動く)
	//if (GetXinputThumbLX(0) > 0)
	//{
	//	m_playerPosition.x += KYARA_SPEED_MAX;
	//}
	//// 上(1と255の間の時は上へ動く)
	//if (GetXinputThumbLY(0) < 0)
	//{
	//	m_playerPosition.y += KYARA_SPEED_MAX;
	//}
	//// 下(-255と1の時は下へ動く)
	//if (GetXinputThumbLY(0) > 0)
	//{
	//	m_playerPosition.y -= KYARA_SPEED_MAX;
	//}

	// シールド関数呼び出し
	DesideShieldPlace();

	// XBOX(斜め移動)
	float moveHorizontal = 0;
	float moveVertical = 0;

	moveHorizontal = GetXinputThumbLX(moveHorizontal);
	moveVertical = GetXinputThumbLY(moveVertical);

	CheckLand();			//LandFgupdate
	FreeFall();				//重力処理
	PlayerOperation();		//プレイヤー操作
	

	//if (!isflg)
	//{
	//	if ((moveHorizontal >= 0.5 || moveVertical >= 0.5) && moveVertical <= 0)  // 右へ移動
	//	{
	//		// 真上
	//		if (moveHorizontal == 0 && moveVertical == -1)
	//		{
	//			isflg = true;
	//		}
	//		// 右横に跳ねる
	//		else if (0.176 < moveVertical / moveHorizontal && moveVertical / moveHorizontal < 1.191) //10〜50
	//		{
	//			isflg = true;
	//		}
	//		// 右上に跳ねる
	//		else if (1.191 <= moveVertical / moveHorizontal) // 50〜90
	//		{
	//			isflg = true;
	//		}
	//		// 左横に跳ねる
	//		else if (-0.176 > moveVertical / moveHorizontal && moveVertical / moveHorizontal > -1.191)
	//		{
	//			isflg = true;
	//		}
	//		// 左上に跳ねる
	//		else if (-1.191 >= moveVertical / moveHorizontal)
	//		{
	//			isflg = true;
	//		}
	//	}
	//}

	// シーン遷移
	if (GetKeyboardTrigger(DIK_RETURN))
	{
		*scene = 3;
	}
}



// シールド
void GameScene::Player::DesideShieldPlace() {										//シールド位置決定

	
	if (GetXinputThumbRX(0) > 100 || GetXinputThumbRX(0) < -100 ||
		GetXinputThumbRY(0) > 100 || GetXinputThumbRX(0) < -100) {
		SHIELD_Fg = true;
	}
	else {
		SHIELD_Fg = false;
	}

	if (SHIELD_Fg == true) {
		//右アナログスティックの座標格納
		m_shieldPosistion.x = m_playerPosition.x + GetXinputThumbRX(0);
		m_shieldPosistion.y = m_playerPosition.y + GetXinputThumbRY(0);

		//シールドとキャラとの相対座標の斜線
		float DiagonalLine = 0;
		DiagonalLine = D3DXVec2Length(&m_shieldPosistion);

		//PBETWEENSとの比率
		float Diagonalratio = 0;
		Diagonalratio = PBETWEENS / DiagonalLine;


		//シールド座標格納
		m_shieldPosistion.x *= Diagonalratio;
		m_shieldPosistion.y *= Diagonalratio;
	}
}

// Playerの描画
void GameScene::Player::Draw(LPDIRECT3DDEVICE9 *device)
{
	// playerの描画
	(*device)->SetFVF(FVF_VERTEX_2D);
	// テクスチャをポリゴンにセット
	(*device)->SetTexture(0, m_player_pD3DTexture);

	// g_pD3DDevice->DrawPrimitiveUPを呼ぶ
	(*device)->DrawPrimitiveUP(
		D3DPT_TRIANGLESTRIP, // ポリゴンの種類(三角、四角など)
		2,                   // ポリゴンの数
		&player_vertex[0],          // 頂点データ構造体の先頭アドレス
		sizeof(VERTEX_2D)    // 頂点データ構造体のサイズ
	);

	// sheildの描画
	if (SHIELD_Fg == true)
	{
		(*device)->SetFVF(FVF_VERTEX_2D);
		// テクスチャをポリゴンにセット
		(*device)->SetTexture(0, m_shield_pD3DTexture);

		// g_pD3DDevice->DrawPrimitiveUPを呼ぶ
		(*device)->DrawPrimitiveUP(
			D3DPT_TRIANGLESTRIP, // ポリゴンの種類(三角、四角など)
			2,                   // ポリゴンの数
			&shield_vertex[0],          // 頂点データ構造体の先頭アドレス
			sizeof(VERTEX_2D)    // 頂点データ構造体のサイズ
		);
	}
}

// Playerの終了処理
void GameScene::Player::Uninit()
{
	// playerテクスチャの解放
	if (m_player_pD3DTexture != NULL)
	{
		m_player_pD3DTexture->Release();
		m_player_pD3DTexture = NULL;
	}

	// shieldテクスチャの解放
	if (m_shield_pD3DTexture != NULL)
	{
		m_shield_pD3DTexture->Release();
		m_shield_pD3DTexture = NULL;
	}
}

//ベクトルの引き算
VERTEX_2D GameScene::Player::sub_vector(const VERTEX_2D& a, const VERTEX_2D& b)
{
	VERTEX_2D ret;
	ret.x = a.x - b.x;
	ret.y = a.y - b.y;
	return ret;
}

// 戻り値    0:三角形の内側に点がある    1:三角形の外側に点がある
// 引数		A,B,Cは順番に入れること、Pは当たり判定をとりたい点
int	GameScene::Player::BetweenPointsCollision(VERTEX_2D A, VERTEX_2D B, VERTEX_2D C, VERTEX_2D P) {

	VERTEX_2D AB = sub_vector(B, A);
	VERTEX_2D BP = sub_vector(P, B);

	VERTEX_2D BC = sub_vector(C, B);
	VERTEX_2D CP = sub_vector(P, C);

	VERTEX_2D CA = sub_vector(A, C);
	VERTEX_2D AP = sub_vector(P, A);

	//外積    Z成分だけ計算すればよいです
	double c1 = AB.x * BP.y - AB.y * BP.x;
	double c2 = BC.x * CP.y - BC.y * CP.x;
	double c3 = CA.x * AP.y - CA.y * AP.x;

	if ((c1 > 0 && c2 > 0 && c3 > 0) || (c1 < 0 && c2 < 0 && c3 < 0)) {
		//三角形の内側に点がある
		return 0;
	}

	//三角形の外側に点がある
	return 1;

}

void GameScene::Player:: FreeFall() {
	if (LandFg == false) {
		{
			PlayerAddSpeed.y += Gravity;
		}
	}
	else {
		PlayerAddSpeed.y = 0.0f;
		PlayerSpeed.y = 0.0f;
	}
};

void GameScene::Player::CheckLand() {


	if (m_playerPosition.y + PLAYER_YSIZE >= 500.0f) {
		LandFg = true;
		JumpFg = false;

	}
	else {
		LandFg = false;
	}

}

void GameScene::Player::PlayerOperation() {
	//キー入力
	if (JumpFg == false
		&& LandFg == true) {
		if (GetXinputButton(0) == XBOX_A) {		//ジャンプ
			PlayerSpeed.y += JumpASpeed;
			JumpFg = true;
		}
	}
	// XBOX
	//移動処理
	// 左(-255と1の間の時は左へ動く)
	if (GetXinputThumbLX(0) < 0)
	{
		m_playerPosition.x -= KYARA_SPEED_MAX;
		GameScene::SetMapChip::UpdateStageCoord();

	}

	// 右(1と255の間の時は右へ動く)
	if (GetXinputThumbLX(0) > 0)
	{
		m_playerPosition.x += KYARA_SPEED_MAX;
		GameScene::SetMapChip::UpdateStageCoord();

	}

	// 上(1と255の間の時は上へ動く)
	if (GetXinputThumbLY(0) < 0)
	{
		m_playerPosition.y += KYARA_SPEED_MAX;
	}

	// 下(-255と1の時は下へ動く)
	if (GetXinputThumbLY(0) > 0)
	{
		m_playerPosition.y -= KYARA_SPEED_MAX;
	}

};