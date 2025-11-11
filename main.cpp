#include <stdio.h>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"

int main(void) {

    IShape* shape[2];

    shape[0] = new Circle();
    shape[1] = new Rectangle();

    printf("円の半径:4\n短形の底辺:2\n短形の高さ:3\n\n");

    // 面積を計算
    for (int i = 0; i < 2; i++) {
        shape[i]->Size();
    }

    printf("\n");

    // 面積を表示
    for (int i = 0; i < 2; i++) {
        shape[i]->Draw();
    }

    // メモリ解放
    for (int i = 0; i < 2; i++) {
        delete shape[i];
    }

    return 0;
}
