// https://atcoder.jp/contests/abc389/tasks/abc389_a

/*
【問題文】
1 文字目が数字、2 文字目が文字 x、3 文字目が数字であるような 3 文字の文字列 S が与えられます。
S の 2 つの数の積を求めてください。

【制約】
・S は 1 文字目が 1 以上 9 以下の整数、2 文字目が文字 x、
    3 文字目が 1 以上 9 以下の整数であるような 3 文字の文字列

【入力】
入力は以下の形式で標準入力から与えられる。

S

【出力】
答えを整数として出力せよ。
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
    
    string s;
    cin >> s;
    
    //int a, b;
    
    int a = s[0] - '0';
    int b = s[2] - '0';
    //a = stoi(s[0]); c - '0'
    //b = stoi(s[2]);
    
    cout << a * b << endl;
    
    // vector<int> a(n);
    // rep(i, 0, n) cin >> a[i];
    
    return 0;
}

#pragma endregion