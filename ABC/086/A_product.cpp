// https://atcoder.jp/contests/abs/tasks/abc086_a

/*
問題文
シカのAtCoDeerくんは二つの正整数 a,b を見つけました。 
a と b の積が偶数か奇数か判定してください。

制約
1 ≤ a,b ≤ 10000
a,b は整数

入力例
3 4
出力例
Even

入力例
1 21
出力例
Odd
*/

#pragma region 提出版

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    if( (a * b) % 2 == 0) cout << "Even";
    else cout << "Odd";
}

#pragma endregion