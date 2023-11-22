#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int table[] = { 1,2,7,-3,5 };
    int sum = 0;
    for (auto i : table) {
        sum += i;
    }
    std::cout << "sum=" << sum;
    vector<int> vtable = { 1,2,7,-3,5 };
    sum = 0;
    for (auto i : vtable) {
        sum += i;
    }
    std::cout << "sum=" << sum;
}
