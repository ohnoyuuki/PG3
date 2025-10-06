#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <list>

using namespace std;

int main() {

    // --- 1970年（西日暮里なし・高輪ゲートウェイなし）---
    list<const char*> lst1970{
        "Tokyo","Kanda","Akihabara","Okachimachi","Ueno","Uguisudani",
        "Nippori","Tabata","Komagome","Sugamo","Otsuka","Ikebukuro",
        "Mejiro","Takadanobaba","Shin-Okubo","Shinjuku","Yoyogi",
        "Harajuku","Shibuya","Ebisu","Meguro","Gotanda","Osaki",
        "Shinagawa","Tamachi","Hamamatsucho","Shimbashi","Yurakucho\n"
    };

    printf("1970\n");
    for (const char* name : lst1970) {
        printf("%s", name);
    }

    // --- 2019年（西日暮里あり・高輪ゲートウェイなし）---
    list<const char*> lst2019 = lst1970;

    // 西日暮里（Nishi-Nippori）を Nippori の後に追加
    for (auto it = lst2019.begin(); it != lst2019.end(); ++it) {
        if (strcmp(*it, "Nippori") == 0) {
            ++it; // Nipporiの次
            lst2019.insert(it, "Nishi-Nippori");
            break;
        }
    }

    printf("\n2019\n");
    for (const char* name : lst2019) {
        printf("%s", name);
    }

    // --- 2022年（西日暮里＋高輪ゲートウェイあり）---
    list<const char*> lst2022 = lst2019;

    // 高輪ゲートウェイ（Takanawa Gateway）を Shinagawa の次に追加
    for (auto it = lst2022.begin(); it != lst2022.end(); ++it) {
        if (strcmp(*it, "Shinagawa") == 0) {
            ++it; // Shinagawaの次
            lst2022.insert(it, "Takanawa Gateway");
            break;
        }
    }

    printf("\n2022\n");
    for (const char* name : lst2022) {
        printf("%s", name);
    }

    return 0;
}