// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/2/ITP1_2_B

// 【Range】
/*
範囲

３つの整数a, b, cを読み込み、それらが a < b < cの条件を満たすならば"Yes"を、
満たさないならば"No"を出力するプログラムを作成して下さい。
*/
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    if(a < b && b < c ) cout << "Yes" << endl;
    else cout << "No" << endl;
}