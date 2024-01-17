#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include<vector>

using namespace std;

/// <summary>
/// 物体の定義
/// </summary>
class Solid {
public:
	virtual double GetVolume() = 0;
	virtual double GetSurface() = 0;
};

/// <summary>
/// 箱型
/// </summary>
class Box :public Solid {
private:
	double width;
	double height;
	double depth;

public:
	Box(
		double width,   //幅
		double height,  //高さ
		double depth) {//奥行
		this->width = width;
		this->height = height;
		this->depth = depth;
	}
	double GetVolume() {
		return width * height * depth;
	}
	double GetSurface() {
		return (width * height + height * depth + depth * width) * 2;
	}
};

class Cylinder :public Solid {
private:
	double radius;
	double height;
public:
	Cylinder(
		double radius,  //半径
		double height   //高さ
	)
	{
		this->radius = radius;
		this->height = height;
	}
	double GetVolume() {
		return M_PI * radius * radius * height;
	}
	double GetSurface() {
		return	2 * M_PI * radius * (radius + height);	//2 * M_PI * radius * radius + 2 * M_PI * radius * height;
	}
};
class Cone :public Solid {
private:
	double radius;
	double height;
public:
	Cone(
		double radius,  //半径
		double height   //高さ
	)
	{
		this->radius = radius;
		this->height = height;
	}
	double GetVolume() {
		return M_PI * radius * radius * height / 3.0;
	}
	double GetSurface()
	{
		double r2 = sqrt(this->radius * this->radius + this->height * this->height);
		return  M_PI * this->radius * this->radius + r2 * r2 * M_PI * this->radius / r2;
	}
};

class Sphere :public Solid {
private:
	double radius;
public:
	Sphere(
		double radius  //半径
	)
	{
		this->radius = radius;
	}
	double GetVolume() {
		return M_PI * radius * radius * radius * 4.0 / 3.0;
	}
	double GetSurface()
	{
		return  4 * M_PI * this->radius * this->radius;
	}
};

class PackageSize
{
private:
	vector<int> table;
public:
	PackageSize(int* table, int tableSize) {
		for (int i = 0; i < tableSize; i++) {
			this->table.push_back(*(table + i));
		}
	}
	int GetPackageSize(Solid) {

	}
};

int main()
{
	/*
	Box box{ 3,5,2.5 };
	Cylinder cylinder{ 2.25,4 };
	Solid* solids[2] = {&box,&cylinder};
	*/
	Solid* solids[] = {
		new Box(3,5,2.5),
		new Cylinder(2.25,4),
		new Cone(2.25,4),
		new Sphere(2.25)
	};
	for (Solid* s : solids)
	{
		cout << "体積=" << s->GetVolume() << endl;
		cout << "表面積=" << s->GetSurface() << endl;
	}
}