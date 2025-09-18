#include <iostream>
using namespace std;

struct DYNAMICOBJECT
{
	char name[16];
	int posX;
	int posY;
	int imageID;
};

struct MAINCARACTER
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
	MAINCARACTER MainCaracter;
	char Job[16];
};

struct ENEMY
{
	MAINCARACTER MainCaracter;
	bool Chest;
	bool BossFlag;
};

void drawMainCaracterParam(const MAINCARACTER& mc);


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

	MAINCARACTER MainCaracter = { "Player", 0, 0, 111, 50, 90, 40, 60 };

	drawMainCaracterParam(MainCaracter);


}

void drawMainCaracterParam(const MAINCARACTER& mc)
{
	cout << "名前 : " << mc.DynamicObject.name
		<< ", X " << mc.DynamicObject.posX << ", Y " << mc.DynamicObject.posY
		<< ", 画像ID : " << mc.DynamicObject.imageID << endl
		<< "Lv" << mc.Level << ", HP" << mc.HP << ", MP" << mc.MP << ", 攻撃力" << mc.Attack << endl;
}

