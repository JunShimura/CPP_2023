#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int b = -3;
	int c = 32;
	int* pA = &a;          //ポインタをaのアドレスで初期化
	//int* pA = addressof(a);//OK
	*pA = 20;              //ポインタの示すアドレスの指してる先の値に代入
	cout << a << endl;     //出力値：20
	pA = &b;
	*pA = 100;			//ポインタの示すアドレスの指してる先の値に代入
	pA = &b + 100;		//アドレスを直接指定				
	*pA = 30;
	cout << a << b << c << endl;
}