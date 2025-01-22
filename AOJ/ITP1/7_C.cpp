// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/7/ITP1_7_C

// 【Spreadsheet】
/*
表計算

表計算を行う簡単なプログラムを作成します。

表の行数rと列数c、r × c の要素を持つ表を読み込んで、
各行と列の合計を挿入した新しい表を出力するプログラムを作成して下さい。
*/

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
using vs = vector<string>;

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

/*
///////////////////////////////////////////
/////////////////// MAIN //////////////////
///////////////////////////////////////////
*/

int main() {
    int r, c;
    cin >> r >> c;
    
    vvi table(r+1, vi(c+1, 0));
    int sumR = 0, sumC = 0, sumRC = 0;
    
    rep(i, 0, r) {
      rep(j, 0, c) {
        cin >> table[i][j];
        sumRC += table[i][j];
        
        // 各行の合計値を求めるために加算
        table[i][c] += table[i][j];
        
        // 各列の合計値を求めるために加算
        table[r][j] += table[i][j];
      }
    }
    
    table[r][c] = sumRC;
    
    rep(i,0,r+1) {
      rep(j,0,c+1) {
        if(j == c) cout << table[i][j] << endl;
        else cout << table[i][j] << " ";
      }
    }
    return 0;
}