#include <iostream>
#include <fstream>//ofstreamのために必要
#include <string>

using namespace std;

int main()
{
	// 08-cin1
	/*
	cout << "文字列を入力して、Enterキーを押してください。\n";
	string str;
	cin >> str;//標準入力から文字列を読み込む
	cout << "入力された文字列は「" << str << "」です。\n";
	*/
	//08-cin3
	/*
	cout << "文字列を入力して、Enterキーを押してください（Ctrl+Zで終了）。\n";
	string str;
	while (cin >> str) {//Ctrl+Zが入力されるまで繰り返す
		cout << "入力された文字列は「" << str << "」です。\n";
	}
	cout << "終了しました。\n";
	*/
	//08-ofstream1
	/*
	ofstream outfile("test.txt", ios_base::out);
	//ofstream outfile("test.txt");//OK
	outfile << "文字列を\n";
	outfile << "ファイルに書き込むんだぞ" << endl;
	outfile.close();//ファイルを閉じる（ここでは不要）
	*/
	//08-split1
	ifstream datafile("test.dat");
	string label;
	string x, y, z;
	while (datafile >> label >> x >> y >> z) {   //データを読み込む
		cout << label << ": " << x + y + z << endl;//ラベルと合計を表示
	}
	datafile.close();



}

