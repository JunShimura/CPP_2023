#include <iostream>
//#include"sayHello.h"
using namespace std;
void sayHello(int times);

int main() {
	unsigned int n;
	std::cout << "�񐔂���́F";
	std::cin >> n;
	sayHello(n);//�֐��̌Ăяo��
}
void sayHello(int times) {
	for (int i = 0; i < times; ++i) {
		cout << "Hello, World!\n";
	}
}