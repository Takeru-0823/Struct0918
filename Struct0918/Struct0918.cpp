#include <iostream>

struct DYNAMICOBJECT
{
	char name[16];
	int posX;
	int posY;
	int imageID;
};

struct MAINCHARACTER
{
	DYNAMICOBJECT DynamicObject;
	int Level;
	int HP;
	int MP;
	int Attack;
};

struct NPC
{
	DYNAMICOBJECT DynamicObject;
	int talkID;
};

struct PLAYER
{
	MAINCHARACTER MainCaracter;
	char Job[16];
};

struct ENEMY
{
	MAINCHARACTER MainCaracter;
	bool Chest;
	bool BossFlag;
};

int main()
{
	PLAYER player[] =
	{
		{"A", 6, 0, 123, 50, 100, 30, 80, "アタッカー"},
		{"B", 0, 0, 124, 45, 150, 80, 20, "ヒーラー"},
		{"C", 3, 3, 125, 47, 80, 100, 60, "魔法使い"},
		{"D", 5, 3, 126, 52, 200, 50, 50, "タンク"}
	};

	ENEMY enemy[] =
	{
		{"Enemy", 10, 2, 221, 40, 50, 60, 40, false, false}
	};

}

