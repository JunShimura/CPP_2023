#include <iostream>
#include<string>
using namespace std;

int main()
{
	int crane;  //鶴
	int turtle; //亀
	int heads; //頭
	int legs; //脚
	
	/* 入力エラーの処理
	while (true) {
		cout << "頭の数は：";		//Console.Write("頭の数は：");
		string s;
		cin >> s;
		try {
			heads = stoi(s);
		}
		catch (invalid_argument& e) {
			cout << "入力エラー";
			continue;
		}
		break;
	}
	*/

	cout << "頭の数は：";		//Console.Write("頭の数は：");
	cin >> heads;				//heads = int.Parse(Console.ReadLine());
	cout << "脚の数は：";		//Console.Write("脚の数は：");
	cin >> legs;				//legs = int.Parse(Console.ReadLine());

	cout << "入力された数は\nheads=" << heads << "\nlegs=" << legs << endl;
	//ここで鶴と亀の数をcraneとturtleに代入
	turtle = (legs / 2) - heads;
	crane = heads - turtle;

	cout << "鶴は" << crane << "、亀は" << turtle;	//Console.WriteLine("鶴は{0}、亀は{1}", crane, turtle);
	//printf("鶴は%d、亀は%d", crane, turtle);

}

