#include <iostream>
using namespace std;

void sayHello(int times) {
	for (int i = 0; i < times; ++i) {
		cout << "Hello, World!\n";
	}
}

int main() {
	unsigned int n;
	cout << "�񐔂���́F";
	cin >> n;
	sayHello(n);//�֐��̌Ăяo��
}