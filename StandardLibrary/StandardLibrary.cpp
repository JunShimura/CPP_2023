#include <iostream>
#include <vector>
#include <algorithm>//sortのために必要
using namespace std;

void iterator1() {
    vector<int> vec(5);//要素数5のベクタ（要素はすべて0）

    //添字の利用
    vec[2] = 102;
    //vec[5] = 105;//範囲外へのアクセス（運がよければ実行時エラー）

    //メンバ関数at()の利用
    vec.at(1) = 101;
    //vec.at(5) = 105;//範囲外へのアクセス。対処法あり（●項）

    //ポインタの利用
    int* p = &vec[0];
    *p = 100;
    *(p + 3) = 103;

    //反復子の利用
    auto it = vec.begin();//先頭要素を指す反復子
    *(it + 4) = 104;

    //すべての要素の表示
    for (auto i = vec.begin(); i != vec.end(); ++i) {
        cout << *i << ", ";
    }
    cout << endl;//出力値：100, 101, 102, 103, 104,
}
void sort() {
    vector<int> v{ 2, 3, 5, 1, 4 };
    sort(v.begin(), v.end());
    for (auto i : v) cout << i << ", ";
    cout << endl;//出力値：1, 2, 3, 4, 5,

    int a[] = { 2, 3, 5, 1, 4 };
    sort(begin(a), end(a));
    //sort(a, end(a));//OK
    for (auto i : a) cout << i << ", ";
    cout << endl;//出力値：1, 2, 3, 4, 5,
}
void serch1() {
    vector<int> v{ 2, 3, 5, 1, 4 };
    auto begin = v.cbegin();
    auto end = v.cend();

    int target = 3;
    auto pos = find(begin, end, target);
    if (pos == end) cout << "見つからない\n";
    else cout << "見つかった：" << *pos << endl;
    //出力値：見つかった：3

    target = 6;
    pos = find(begin, end, target);
    if (pos == end) cout << "見つからない\n";
    else cout << "見つかった：" << *pos << endl;
    //出力値：見つからない
}
void serch2() {
    vector<int> v = { 503, 87, 512, 61, 908, 170, 897, 275, 200, 426 };

    //二分探索のためには、まず並べ替えが必要
    sort(v.begin(), v.end());

    auto begin = v.cbegin();
    auto end = v.cend();

    int target = 200;//200を二分探索で探す
    auto pos = lower_bound(begin, end, target);
    //探索した値かどうかの確認
    if (pos == end || *pos != target) cout << "見つからない\n";
    else cout << "見つかった：" << *pos << endl;
    //出力値：見つかった：200

    pos = find(begin, end, target);
    if (pos == end) cout << "findで見つからない\n";
    else cout << "findで見つかった：" << *pos << endl;


    target = 404;//404を二分探索で探す
    pos = lower_bound(begin, end, target);
    //探索した値かどうかの確認
    if (pos == end || *pos != target) cout << "見つからない\n";
    else cout << "見つかった：" << *pos << endl;
    //出力値：見つからない

    pos = find(begin, end, target);
    if (pos == end) cout << "findで見つからない\n";
    else cout << "findで見つかった：" << *pos << endl;
}

int main()
{
    std::cout << "Hello World!\n";
    //iterator1();
    //sort();
    //serch1();
    //serch2();
}