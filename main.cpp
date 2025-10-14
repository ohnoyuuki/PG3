#include <stdio.h>

// 再帰関数の定義
int Recursive(int kyuuryou, int zikan, int kotei) {

    if (kyuuryou >= kotei) {
        printf("%d時間後に超える\n", zikan);
        return zikan;
    }

    // 現在の給料と固定給を表示
    printf("時給: %d円　固定給: %d円\n", kyuuryou, kotei);

    // 次の時間の給料を計算（前の時給×2−50）
    kyuuryou = kyuuryou * 2 - 50;

    // 再帰呼び出し（時間を1増やす）
    return Recursive(kyuuryou, zikan + 1, kotei);
}

int main() {

    int saiki = 100;   // 最初の時給
    int ippan = 1226;  // 一般的な時給
    int zikan = 1;     // 1時間目スタート（0でもOK）

    int result = Recursive(saiki, zikan, ippan);

    printf("結果: %d時間後に超えた\n", result);

    return 0;
}