#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

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
class Box :Solid {
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

class Cylinder :Solid {
private:
    double radius;
    double height;
public:
    Cylinder(
        double radius,  //幅
        double height   //高さ
    )
        this->radius = width;
        this->height = height;
    }
    double GetVolume() {
        return 2* M_PI* radius * radius * height;
    }
    double GetSurface() {
        return 4 * M_PI * radius* radius * height;
    }
};

int main()
{
    Box box{ 3,5,2.5 };
    cout << "boxの体積=" << box.GetVolume() << endl;
    cout << "boxの表面積=" << box.GetSurface() << endl;
}