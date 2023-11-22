#include <iostream>
#include <memory>
#include <vector>
using namespace std;

void f(int* first, int* last) {
    for (int* p = first; p != last; ++p) {
        cout << *p << ", ";
    }
    cout << endl;
}

int main() {
    int a[] = { 2, 3, 5, 7, 11 };
    f(&a[0], &a[4]);
    f(a, &a[4]);
    vector<int> v={ 2, 3, 5, 7, 11 };
    f(&v[0], &v[4]);
    v.insert(v.begin()+1, -8);
    f(&v[0], &v[4]);
    //f(begin(a), end(a));//出力値：2, 3, 5, 7, 11, 
    //f(a, end(a));//OK
    
}