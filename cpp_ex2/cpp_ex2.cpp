// cpp_ex2.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	const int DATA_NUM = 10;	// 配列の要素数

	// 10人の学生のテストの得点を格納した配列
	int point[] = { 85, 72, 63, 45, 100, 98, 52, 88, 74, 65 };
	int i, j;			// 配列の要素番号（ループカウンタ）

	sort(point, point + _countof(point), greater<int>());
	/*
	for (i = _countof(point) - 1; i > 0; i--) {
		bool isSwaped = false;
		for (j = 0; j < i; j++) {
			if (point[j] < point[j + 1]) {
				int temp = point[j];
				point[j] = point[j + 1];
				point[j + 1] = temp;
				isSwaped = true;
			}
		}
		if (!isSwaped) {
			break;
		}
	}
	*/
	struct PointBorder {
		int point;
		char grade;
	};
	PointBorder pointborder[]
		= {
			{83,'A'},
			{66,'B'},
			{50,'C'},
			{0,'D'}
	};
	const int GRADE_COUNT = 101;
	char gradeTable[GRADE_COUNT];
	for (i = 0; i < GRADE_COUNT; i++) {
		for (j = 0; j < _countof(pointborder); j++) {
			if (i >= pointborder[j].point) {
				gradeTable[i] = pointborder[j].grade;
				break;
			}
		}
	}
	for (i = 0; i < _countof(point); i++) {
		cout << point[i] << "=" << gradeTable[point[i]] << endl;
	}
	/*
	for (i = 0; i < _countof(point); i++) {
		cout << point[i] << "=";
		for (j = 0; j < _countof(pointborder); j++) {
			if (point[i] >= pointborder[j].point) {
				cout << pointborder[j].grade << endl;
				break;
			}
		}
		
		if (point[i] >= 83) {
			cout << "A" << endl;
		}
		else if (point[i] >= 66) {
			cout << "B" << endl;
		}
		else if (point[i] >= 50) {
			cout << "C" << endl;
		}
		else {
			cout << "D" << endl;
		}
		
	}
	*/

	return 0;
}
