#include <iostream>
using namespace std;

void sayHello(int times) {
	for (int i = 0; i < times; ++i) {
		cout << "Hello, World!\n";
	}
}

int main() {
	unsigned int n;
	cout << "回数を入力：";
	cin >> n;
	sayHello(n);//関数の呼び出し
}