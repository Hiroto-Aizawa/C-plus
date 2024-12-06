// https://atcoder.jp/contests/abc074/tasks/abc074_a

/*
問題文
N×N のマス目があります。
このマス目の各マスを白色または黒色に塗ることにしました (すべてのマスをどちらか片方の色に塗ります)。
ちょうど A マスを白色に塗るとき、黒色に塗ることになるマスはいくつあるでしょうか。

制約
1 ≦ N ≦ 100
0 ≦ A ≦ N2

入力例
3
4
出力例
5

*/

#pragma region 提出版

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, ans = 0;
    cin >> n >> a;

    ans = (n * n) - a;
    cout << ans << endl; 
}

#pragma endregion