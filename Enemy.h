#include <iostream>
using namespace std;

class Enemy {
public:
    void Update();   // 状態の更新
    void Approach(); // 接近
    void Attack();   // 攻撃
    void Retreat();  // 離脱

    // 関数ポインタテーブル
    static void (Enemy::* table[])();

private:
    int index = 0; // 関数テーブルのインデックス
};