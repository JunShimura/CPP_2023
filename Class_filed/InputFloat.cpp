#include"InputFloat.h"	// InputFloatのプロトタイプ
#include <iostream>		//cin，coutのプロトタイプ
using namespace std;	// stdを省略可にする
float InputFloat(string message) {
	cout << message;
	float i;
	cin >> i;
	return i;
}