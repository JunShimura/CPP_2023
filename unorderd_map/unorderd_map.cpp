#include <iostream>
#include <unordered_map>
#include<float.h>

using namespace std;

double GetBMI(float height, float weight);
int getObesity(double bmi);
void getObesityTest();
struct ObesityBMI {
	double bmi;
	int obesity;
};
int main()
{
	auto height = 167.5;
	auto weight = 61.5;
	auto bmi = GetBMI(height, weight); // BMIを求める数式
	cout << "身長=" << height << "cm, 体重 = "
		<< weight << "kg, \nあなたのBMIは" << bmi << "です。" << endl;
	auto obesity = getObesity(bmi);
	string obesityClass[] = {
		"低体重",		//	-1	bmi<18.5
		"普通体重",	//	0	18.5以上25未満
		"肥満(1度）",	//	1	25以上30未満	
		"肥満(2度）",	//	2	30以上35未満	
		"肥満(3度）",	//	3	35以上40未満
		"肥満(4度）"	//	4	40以上		
	};
	unordered_map<int, string> obesityClassMap{
		{-1,"低体重"},
		{0,"普通体重"},
		{1,"肥満(1度）"},
		{2,"肥満(2度）"},
		{3,"肥満(3度）"},
		{4,"肥満(4度）"}
	};
	cout << obesityClassMap[obesity] << "です。" << endl;
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
	static ObesityBMI obesityMap[]{
		{18.5 ,- 1},
		{25,0},
		{30,1},
		{35,2},
		{40,3},
		{DBL_MAX,4}
	};
	int obesity;
	for (int i = 0; i < _countof(obesityMap); i++) {
		if (bmi < obesityMap[i].bmi) {
			obesity = obesityMap[i].obesity;
			break;
		}
	}
	/*
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
	*/
	
	return obesity;
}
void getObesityTest() {
	static ObesityBMI obesityTestMap[]{
	{10 ,-1},
	{18.4,-1},
	{18.5,0},
	{24,0},
	{25,1},
	{29,1},
	{30,2},
	{34,2},
	{35,3},
	{40,4},
	{45,4},
	};
	for (int i = 0; i < _countof(obesityTestMap); i++) {
		if (getObesity(obesityTestMap[i].bmi) == obesityTestMap[i].obesity) {
			cout << "passed Test#" << i << endl;
		}
		else {
			cout << "MISSED Test#" << i << endl;
		}
	}
}
