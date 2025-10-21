#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

// コールバック関数のプロトタイプ宣言
void (*Callback)(int result);

// サイコロの出目を決定する関数
int roll_dice() {
    // 1～6のランダムな整数を返す
    return rand() % 6 + 1;
}

// 判定を行うコールバック関数
void judge_result(int result) {

    int input;

    printf("サイコロの出目が奇数(1)か偶数(2)か入力:");
    scanf_s("%d", &input);

    printf("判定中...\n");

    Sleep(3000);

    if ((result % 2 == 1 && input == 1) || (result % 2 == 0 && input == 2)) {
        printf("正解\n");
    } else {
        printf("不正解\n");
    }

    printf("サイコロの目は%d\n", result);
}

// メイン関数
int main() {

    srand((int)time(NULL));

    int dice_result = roll_dice();

    // コールバック関数に実行したい関数のアドレスを代入
    Callback = judge_result;

    // サイコロの結果を引数にして関数ポインタ経由で呼び出し
    Callback(dice_result);

    return 0;
}
