#include <iostream>
//#include"sayHello.h"
using namespace std;
void sayHello(int times);

int main() {
	unsigned int n;
	std::cout << "‰ñ”‚ğ“ü—ÍF";
	std::cin >> n;
	sayHello(n);//ŠÖ”‚ÌŒÄ‚Ño‚µ
}
void sayHello(int times) {
	for (int i = 0; i < times; ++i) {
		cout << "Hello, World!\n";
	}
}