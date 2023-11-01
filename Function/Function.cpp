#include <iostream>
using namespace std;
double GetBMI(float height,float weight); 

int main()
{
    auto height = 167.5;
    auto weight = 61.5;
    auto bmi = GetBMI(height,weight); // BMIを求める数式
    cout << "身長=" << height << ", 体重 = "
        << weight << " , \nBMI = " << bmi;
}
/// <summary>
/// BMI算出
/// </summary>
/// <param name="height">身長</param>
/// <param name="weight">体重</param>
/// <returns></returns>
double GetBMI(float height, float weight) {
    return weight / ((height / 100) * (height / 100));
}