#include "Rectangle.h"

void Rectangle::Size() {
    answer = wide * height;
}

void Rectangle::Draw() {
    printf("四角形の面積：%d\n", answer);
}
