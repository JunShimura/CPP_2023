#include <iostream>
//#include"sayHello.h"
using namespace std;
void sayHello(int times);

int main() {
	unsigned int n;
	std::cout << "回数を入力：";
	std::cin >> n;
	sayHello(n);//関数の呼び出し
}
void sayHello(int times) {
	for (int i = 0; i < times; ++i) {
		cout << "Hello, World!\n";
	}
}