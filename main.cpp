#include <cstdio>

using namespace std;

// 動物クラス
class Animal {
public:
    // 鳴く関数（純粋仮想関数）
    virtual void sound() const = 0;
};

// 犬クラス
class Dog : public Animal {
public:
    void sound() const override {
        printf("イヌ鳴き声：ワン\n");
    }
};

// 猫クラス
class Cat : public Animal {
public:
    void sound() const override {
        printf("ネコ鳴き声：ニャー\n");
    }
};

int main() {

    // 動物クラスのポインタ（実際はDogとCatを指す）
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    animal1->sound();  // 実際はDogのsound()が呼ばれる
    animal2->sound();  // 実際はCatのsound()が呼ばれる

    delete animal1;
    delete animal2;

    return 0;
}
