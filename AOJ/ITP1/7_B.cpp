// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/7/ITP1_7_B

// 【How many ways?】
/*
組み合わせの数

1 から n までの数の中から、
重複無しで３つの数を選びそれらの合計がx となる組み合わせの数を求めるプログラムを作成して下さい。

例えば、1 から 5 までの数から３つを選んでそれらの合計が 9 となる組み合わせは、

1 + 3 + 5 = 9
2 + 3 + 4 = 9
の２通りがあります。
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
    int n, m;
    //cin >> n >> m;
    
    // string s;
    // cin >> s;
    
    // vector<int> a(n, 0);
    // rep(i, 0, n) cin >> a[i];
    
    while(true) {
      cin >> n >> m;
      if(n == 0 && m == 0) break;
      
      int cnt = 0;
      
      REP(i, 1, n) {
        REP(j, i+1, n) {
          REP(k, j+1, n) {
            if(i + j + k == m) cnt++;
          }
        }
      }
      cout << cnt << endl;
    }
    
    return 0;
}