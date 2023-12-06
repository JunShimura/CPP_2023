#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	string str1 = "Hello";
	//string str1("Hello");//OK
	cout << str1 << endl;//出力値：Hello

	string str2;//空文字列

	//コピー代入
	str2 = str1;
	cout << str2 << endl;//出力値：Hello

	//　実験
	//string* str3 = &str1;
	//str1 = "HELLO";
	//cout << "str3="<<*str3 << endl;//出力値：HELLO
	
	cout << str2 << endl;//出力値：Hello

	//文字列の結合1（string + 文字列リテラル）
	str2 = str1 + ", World!";
	cout << str2 << endl;//出力値：Hello, World!

	//文字列の結合2（文字列リテラル + string）
	str2 = "ABCDEFG " + str1;
	cout << str2 << endl;//出力値：ABCDEFG Hello

	//文字列の結合3（string + string）
	cout << (str1 + str2) << endl;//出力値：HelloABCDEFG Hello

	//文字列の結合4（文字列リテラル + 文字列リテラル）
	//cout << ("Hello, " + "World!") << endl;//エラー

	str1 = "Hello, ";
	str2 = "World!";

	//4文字目
	cout << str1[4] << endl;//出力値：o

	str1[1] = 0x40;// 49;

	//追記
	str1 += str2;
	cout << str1 << endl;//出力値：Hello, World!

	//比較
	cout << (str1 == str2) << endl;//出力値：0（等しくない）
	cout << str1.compare("Hello, Z!") << endl;//出力値：-1（str1が辞書順で前）

	//検索（前から）
	cout << str1.find("World") << endl;//出力値：7（7文字目に"World"がある）
	if (str1.find("world") == string::npos) cout << "見つからない\n";//出力値：見つからない

	//検索（後ろから）
	cout << str1.rfind("o") << endl;//出力値：8（8文字目に"o"がある）

	//置換（7文字目からの5文字を置き換える）
	str1.replace(7, 5, "Nippon");
	cout << str1 << endl;//出力値：Hello, Nippon!

	//部分文字列（7文字目から6文字を取り出す）
	cout << str1.substr(7, 6) << endl;//出力値：Nippon

	// Cstyle-1
	char cstr[] = "hello";               //Cスタイルの文字列
	char cstr2[] = "Goodbye";            //Cスタイルの文字列

	cstr[5] = 0x40;// 'H';                      //配列の要素にアクセスする
	cout << cstr << endl;                       //出力値：Hello
	size_t size = end(cstr) - begin(cstr);      //要素数を求める
	//size_t size = sizeof(cstr) / sizeof(char);//OK
	cout << size << endl;                       //出力値：6（5ではない）
	cout << strlen(cstr) << endl;

	//07-iomanip
	int n = 123;
	cout << '[' << setw(5) << n << ']' << endl;//出力値：[  123]（5桁表示）
	cout << '[' << n << ']' << endl;           //出力値：[123]　（元に戻る）

	double x = 1. / 7.;
	cout << x << endl;       //出力値：0.142857（標準は6桁表示）
	cout << setprecision(10);//10桁表示に変更する
	cout << x << endl;       //出力値：0.1428571429
	cout << setprecision(6); //6桁表示に戻す

	//07-printf
	{
		int x = 10;
		double y = 3.1415926535;
		printf("Hello, World!\n");      //出力値：Hello, World!
		printf("The value is %d.\n", x);//出力値：The value is 10.（整数）
		printf("x= %d,y=%f\n", x,y);	//
		printf("%d %f\n", x, y);        //出力値：10 3.141593（複数の引数）
		printf("<%5d>\n", x);           //出力値：<   10>（桁数は5）
		printf("%.7f\n", y);            //出力値：3.1415927（小数点以下は7桁まで）
		printf("The address of x is %p.\n", static_cast<void*>(&x));
		//出力例：The address of x is 00DEFB28.
	}

}
