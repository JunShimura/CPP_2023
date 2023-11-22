#include <iostream>
using namespace std;
double GetBMI(float height, float weight);
int getObesity(double bmi);
void getObesityTest();
int main()
{
	auto height = 167.5;
	auto weight = 61.5;
	auto bmi = GetBMI(height, weight); // BMIを求める数式
	cout << "身長=" << height << "cm, 体重 = "
		<< weight << "kg, \nあなたのBMIは" << bmi<<"です。"<<endl;
	auto obesity = getObesity(bmi);
	string obesityClass[]= {
		"低体重",		//	-1	bmi<18.5
		"普通体重",	//	0	18.5以上25未満
		"肥満(1度）",	//	1	25以上30未満	
		"肥満(2度）",	//	2	30以上35未満	
		"肥満(3度）",	//	3	35以上40未満
		"肥満(4度）"	//	4	40以上		
	};
	cout << obesityClass[obesity+1]<< "です。" << endl;
	getObesityTest();
	return 0;
}
/// <summary>
/// BMI算出
/// </summary>
/// <param name="height">身長</param>
/// <param name="weight">体重</param>
/// <returns></returns>
double GetBMI(float height, float weight) {
	return weight / (height * height) * 10000;
}
/// <summary>
/// 肥満度の取得
/// </summary>
/// <param name="bmi">BMI</param>
/// <returns>肥満度</returns>
int getObesity(double bmi) {
	int obesity = 4;
	if (bmi < 18.5) {
		obesity = -1;	//	-1	bmi<18.5		
	}
	else if (bmi < 25) {
		obesity = 0;	//	0	18.5以上25未満
	}
	else if (bmi < 30) {
		obesity = 1;	//	1	25以上30未満
	}
	else if (bmi < 35) {
		obesity = 2;	//	2	30以上35未満
	}
	else if (bmi < 40) {
		obesity = 3;	//	3	35以上40未満
	}
	return obesity;
}
void getObesityTest() {
	double bmi[] = { 10,	18.4,	18.5,	24,	25,	29,	30,	34,	35,	40,	45 };
	int		ob[] = { -1,	-1,		0,		0,	1,	1,	2,	2,	3,	4,	4	};
	for (int i = 0; i < _countof(bmi); i++) {
		if (getObesity(bmi[i]) == ob[i]) {
			cout << "passed Test#" << i << endl;
		}
		else {
			cout << "MISSED Test#" << i << endl;
		}
	}
}
