#include <iostream>
#include <string>

#include"Box.h"	// Boxのプロトタイプ
#include"InputFloat.h"	// InputFloatのプロトタイプ

using namespace std;

int main()
{
	Box boxTest = Box(
		InputFloat("幅はいくつ？"),
		InputFloat("高さはいくつ？"),
		InputFloat("奥行はいくつ？")
	);
	std::cout << "表面積 = " << boxTest.GetSurface()
		<< "、体積=" << boxTest.GetVolume() << endl;
	Box* boxTestNew = &boxTest;
	std::cout << "表面積 = " << boxTestNew->GetSurface()
		<< "、体積=" << boxTestNew->GetVolume() << endl;
}
