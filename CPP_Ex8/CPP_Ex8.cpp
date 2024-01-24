#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include<string>
#include<vector>

using namespace std;

/// <summary>
/// 物体の定義
/// </summary>
class Solid {
public:
	virtual double GetVolume() = 0;
	virtual double GetSurface() = 0;
	virtual double GetPackageLength() = 0;
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
	double GetPackageLength() {
		return width + height + depth;
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
	double GetPackageLength() {
		return radius * 4 + height;
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
	double GetPackageLength() {
		return radius * 4 + height;
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
	double GetPackageLength() {
		return radius * 6;
	}
};

class PackageSizeTable
{
private:
	string name;
	vector<int> table;
public:
	PackageSizeTable(const string name, const int* table, const int tableSize) {
		this->name = name;
		for (int i = 0; i < tableSize; i++) {
			this->table.push_back(*(table + i));
		}
	}
	string GetName() {
		return name;
	}
	int GetPackageSize(Solid* solid) {
		int packSize = -1;
		for (int i = 0; i < this->table.size(); i++) {
			if (solid->GetPackageLength() <= table[i]) {
				packSize = table[i];
				break;
			}
		}
		return packSize;
	}
};

class Package {
private:
	Solid* solid;
public:
	PackageSizeTable* packSizeTable;
	string name;
	Package(const char* name, Solid* solid, PackageSizeTable* packSizeTable) {
		this->name = name;
		this->solid = solid;
		this->packSizeTable = packSizeTable;
	}
	int GetPackageSize() {
		return this->packSizeTable->GetPackageSize(solid);
	}
};

int main()
{
	// クロネコ
	int kuroneko[] = { 60,80,100,120,140,160,180,200 };
	PackageSizeTable kuronekoTable = PackageSizeTable("クロネコ", kuroneko, _countof(kuroneko));
	// ゆうパック
	int yupack[] = { 60,80,100,120,140,160,170 };
	PackageSizeTable yupackTable = PackageSizeTable("ゆうパック", yupack, _countof(yupack));

	Box nintendoSwitchBox{ 20,35,10 };
	Box nintendoSwitchBox2022{ 21,26,10 };
	Cylinder monsterEnergyCan{ 5.8,15.6 };
	Package packages[] = {
		Package{"NintendoSwitch",&nintendoSwitchBox,&kuronekoTable},
		Package{"NintendoSwitch",&nintendoSwitchBox,&yupackTable},
		Package{"新しいNintendoSwitch",&nintendoSwitchBox2022,&kuronekoTable},
		Package{"新しいNintendoSwitch",&nintendoSwitchBox2022,&yupackTable},
		Package{"モンエナ缶ひとつ",&monsterEnergyCan,&yupackTable},
	};

	for (Package p : packages)
	{
		cout << p.name << "の" << p.packSizeTable->GetName() << "での宅急便のサイズは" << p.GetPackageSize() << endl;
	}
}