#pragma once
#include <iostream>

// クラステンプレート
template <typename T1, typename T2>

class TemplateClass {
public:
	// コンストラクタ
	TemplateClass(T1 number1, T2 number2)
		: Number1(number1), Number2(number2) {
	}

	// ２つの値を比べて小さい方を返す
	T1 Min() {
		if (Number1 < Number2)
			return static_cast<T1>(Number1);
		else
			return static_cast<T1>(Number2);
	}

private:
	T1 Number1; // number1の値を格納
	T2 Number2; // number2の値を格納

};

