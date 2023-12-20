#include <iostream>
#include <algorithm>
#include <vector>
#include"minmax.h"

using namespace std;

//minmax.hに移動
//int numOfDivisors(int n);
//bool less1(int lhs, int rhs);

int main() {
	//2個の比較
	cout << min(3, 2) << endl;//出力値：2
	cout << max(3, 2) << endl;//出力値：3

	// ２個の場合の別の書き方
	auto a = 3, b = 3;
	cout << (a < b ? a : b) << endl;//出力値：2


	//任意個の比較
	cout << min({ 3, 2, 1, 4 }) << endl;//出力値：1
	cout << max({ 3, 2, 1, 4 }) << endl;//出力値：4

	//同時に取得
	auto result1 = minmax({ 3, 2, 1, 4 });
	cout << result1.first << endl; //出力値：1
	cout << result1.second << endl;//出力値：4

	//比較方法の指定
	auto result2 = minmax({ 10, 11, 9, 12 }, less1);
	cout << result2.first << endl; //出力値：11
	cout << result2.second << endl;//出力値：12

	//コンテナの最大・最小
	vector<int> v{ 10, 11, 9, 12 };
	auto minIter = min_element(v.cbegin(), v.cend());
	cout << *minIter << endl;//出力値：9

	auto maxIter = max_element(v.cbegin(), v.cend());
	cout << *maxIter << endl;//出力値：12

	auto minmaxIter1 = minmax_element(v.cbegin(), v.cend());
	cout << *minmaxIter1.first << endl; //出力値：9
	cout << *minmaxIter1.second << endl;//出力値：12

	auto minmaxIter2 = minmax_element(v.cbegin(), v.cend(), less1);
	cout << *minmaxIter2.first << endl; //出力値：11
	cout << *minmaxIter2.second << endl;//出力値：12
}

//minmax.cppへ移動
//int numOfDivisors(int n) {
//    int divisors = 0;
//    for (int i = 1; i <= n; ++i) {
//        if (n % i == 0) ++divisors;
//    }
//    return divisors;
//}
//
//bool less1(int lhs, int rhs) {
//    return numOfDivisors(lhs) < numOfDivisors(rhs);
//}