// https://atcoder.jp/contests/abc394/tasks/abc394_a

/*
【問題文】
数字からなる文字列 S が与えられます。
S から 2 以外の文字を削除し、残った文字を順序を保って結合した文字列を求めてください。

【制約】
・S は数字からなる長さ 1 以上 100 以下の文字列
・S は 2 を 1 つ以上含む

【入力】
入力は以下の形式で標準入力から与えられる。
S

【出力】
答えを出力せよ。

*/

#pragma region 回答

#include <bits/stdc++.h>
//-------------------------------------------
// #include <iostream>
// #include <vector>
// #include <algorythm>
using namespace std;

/*エイリアス*/
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<long long>;
using vvl = vector<vl>;
using vs = vector<string>;
using vvs = vector<vs>;

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

// stringから桁和を求める関数
int digit_sum(string s) {
    int sum = 0;
    
    for(char c : s) {
        //intへキャスト
        sum += c - '0';
    }
    return sum;
}

/*
///////////////////////////////////////////
/////////////////// MAIN //////////////////
///////////////////////////////////////////
*/

int main() {
    // int n;
    // cin >> n;

    string s;
    cin >> s;

    // vi a(n, 0);
    // rep(i, 0, n) cin >> a[i];
    for(char c : s) {
        if(c == '2') cout << c;
    }
    
    cout << endl;

    return 0;
}

#pragma endregion