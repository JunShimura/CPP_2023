#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int b = -3;
	int c = 32;
	int* pA = &a;          //�|�C���^��a�̃A�h���X�ŏ�����
	//int* pA = addressof(a);//OK
	*pA = 20;              //�|�C���^�̎����A�h���X�̎w���Ă��̒l�ɑ��
	cout << a << endl;     //�o�͒l�F20
	pA = &b;
	*pA = 100;			//�|�C���^�̎����A�h���X�̎w���Ă��̒l�ɑ��
	pA = &b + 100;		//�A�h���X�𒼐ڎw��				
	*pA = 30;
	cout << a << b << c << endl;
}