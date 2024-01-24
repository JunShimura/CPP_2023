

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

class Solid
{
public:
	virtual double GetSize() = 0;
};

class Box :public Solid
{
private:
	double width;
	double height;
	double depth;

public:
	Box(double width, double height, double depth)
	{
		this->width = width;
		this->height = height;
		this->depth = depth;
	}

	double GetSize()
	{
		return width + height + depth;
	}
};

class Cylinder :public Solid
{
private:
	double radius;
	double height;

public:
	Cylinder(double radius, double height)
	{
		this->radius = radius;
		this->height = height;
	}

	double GetSize()
	{
		return radius * 4 + height;
	}
};

class Cone :public Solid
{
private:
	double radius;
	double height;

public:
	Cone(double radius, double height)
	{
		this->radius = radius;
		this->height = height;
	}

	double GetSize()
	{
		return radius * 4 + height;
	}
};

class Sphere :public Solid
{
private:
	double radius;
public:
	Sphere(double radius)
	{
		this->radius = radius;
	}

	double GetSize()
	{
		return radius * 6;
	}
};

int main()
{
	Box box{ 100,20,18 };
	Cylinder cylinder{ 45,20 };
	Cone cone{ 20,13 };
	Sphere sphere{ 28 };

	double bSize = box.GetSize();
	double cySize = cylinder.GetSize();
	double coSize = cone.GetSize();
	double sSize = sphere.GetSize();
	int kuroneko[] =
	{
		60,80,100,120,140,160,180,200
	};
	int yuupakku[] =
	{
		60,80,100,120,140,160,170
	};

	cout << "クロネコの場合" << endl;
	for (int i = 0; i < _countof(kuroneko); i++)
	{
		if (kuroneko[i] >= bSize)
		{
			cout << "箱のサイズは" << kuroneko[i] << "サイズです" << endl;
			break;
		}
	}

	if (bSize > kuroneko[_countof(kuroneko)-1])
	{
		cout << "この箱の入るサイズはありません。" << endl;
	}

	for (int i = 0; i < _countof(kuroneko); i++)
	{
		if (kuroneko[i] >= cySize)
		{
			cout << "円柱のサイズは" << kuroneko[i] << "サイズです" << endl;
			break;
		}
	}

	if (cySize > 200)
	{
		cout << "この円柱の入るサイズはありません。" << endl;
	}

	for (int i = 0; i < _countof(kuroneko); i++)
	{
		if (kuroneko[i] >= coSize)
		{
			cout << "円錐のサイズは" << kuroneko[i] << "サイズです" << endl;
			break;
		}
	}

	if (coSize > 200)
	{
		cout << "この円錐の入るサイズはありません。" << endl;
	}

	for (int i = 0; i < _countof(kuroneko); i++)
	{
		if (kuroneko[i] >= sSize)
		{
			cout << "球のサイズは" << kuroneko[i] << "サイズです" << endl;
			break;
		}
	}

	if (sSize > 200)
	{
		cout << "この球の入るサイズはありません。" << endl;
	}

	cout << "ゆうパックの場合" << endl;
	for (int i = 0; i < _countof(yuupakku); i++)
	{
		if (yuupakku[i] >= bSize)
		{
			cout << "箱のサイズは" << yuupakku[i] << "サイズです" << endl;
			break;
		}
	}

	if (bSize > 170)
	{
		cout << "この箱の入るサイズはありません。" << endl;
	}

	for (int i = 0; i < _countof(yuupakku); i++)
	{
		if (yuupakku[i] >= cySize)
		{
			cout << "円柱のサイズは" << yuupakku[i] << "サイズです" << endl;
			break;
		}
	}

	if (cySize > 170)
	{
		cout << "この円柱の入るサイズはありません。" << endl;
	}

	for (int i = 0; i < _countof(yuupakku); i++)
	{
		if (yuupakku[i] >= coSize)
		{
			cout << "円錐のサイズは" << yuupakku[i] << "サイズです" << endl;
			break;
		}
	}

	if (coSize > 170)
	{
		cout << "この円錐の入るサイズはありません。" << endl;
	}

	for (int i = 0; i < _countof(yuupakku); i++)
	{
		if (yuupakku[i] >= sSize)
		{
			cout << "球のサイズは" << yuupakku[i] << "サイズです" << endl;
			break;
		}
	}

	if (sSize > 170)
	{
		cout << "この球の入るサイズはありません。" << endl;
	}
}