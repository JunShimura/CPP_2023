#include"InputFloat.h"	// InputFloat�̃v���g�^�C�v
#include <iostream>		//cin�Ccout�̃v���g�^�C�v
using namespace std;	// std���ȗ��ɂ���
float InputFloat(string message) {
	cout << message;
	float i;
	cin >> i;
	return i;
}