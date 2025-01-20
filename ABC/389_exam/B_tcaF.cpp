// https://atcoder.jp/contests/abc389/tasks/abc389_b

/*
【問題文】
2 以上の整数 X が与えられます。
N!=X を満たすような正の整数 N を求めてください。
ただし、N! は N の階乗を表し、そのような N がただ一つ存在することは保証されています。

【制約】
・2 ≤ X ≤ 3 × 10^18
・N!=X を満たすような正の整数 N がただ一つ存在する
・入力は全て整数

【入力】
入力は以下の形式で標準入力から与えられる。

X

【出力】
答えを出力せよ。
*/

#include <bits/stdc++.h>
//-------------------------------------------
// #include <vector>
// #include <algorythm>
using namespace std;

/* マクロ */
// 関数
#define rep(i, a, n) for (int i=a; i < n; i++)
#define REP(i, a, n) for (int i=a; i <= n; i++)
// 出力系
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

// 桁和を求める関数
int digit_sum(int n) {
    int sum = 0;

    while(n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

#pragma region main

int main() {
    // int n;
    // cin >> n;
    
    // string s;
    // cin >> s;
    
    // vector<int> a(n);
    // rep(i, 0, n) cin >> a[i];
    
    long long x;
    cin >> x;
    
    long long a = 1;
    int n = 1;

    while (a < x) {
        n++;
        a *= n;
    }
    
    if (a == x) {
        cout << n << endl;
    }
    return 0;
}

#pragma endregion