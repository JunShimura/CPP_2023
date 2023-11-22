#include <iostream>
using namespace std;
auto f() {
    int* a = new int[4] {2, 3, 5, 7};
    return a;
}
void sub() {
    auto a = f();
    auto sum = 0;
    for (size_t i = 0; i < 4; ++i) {
        cout << a[i] << ", ";
        sum += a[i];
    }
    cout <<"合計=" << sum << endl;//出力値：2, 3, 5, 7,
    //delete[] a;
}
int main() {
    sub();
}