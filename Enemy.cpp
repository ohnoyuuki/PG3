#include "Enemy.h"


void Enemy::Approach(){
	cout << "敵が接近！" << endl;
}

void Enemy::Attack(){
	cout << "敵が攻撃！" << endl;
}

void Enemy::Retreat(){
	cout << "敵が離脱！" << endl;
}

void Enemy::Update() {
	// 現在のインデックスに対応する関数を呼び出す
	(this->*table[index])();
	cout << "次の状態に移行 (0: はい、 他: いいえ)";
	int input;
	cin >> input;

	// 0を入力したら次の状態へ
	if (input == 0) {
		index = (index + 1) % 3;// 3状態でループ
	}
}
// メンバ関数ポインタテーブル
void (Enemy::* Enemy::table[])() = {
	&Enemy::Approach,
	&Enemy::Attack,
	&Enemy::Retreat
};


