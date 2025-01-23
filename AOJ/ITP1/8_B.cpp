// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/8/ITP1_8_B

// 【Sum of Numbers】
/*
数字の和

与えられた数の各桁の和を計算するプログラムを作成して下さい。
*/

// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/7

// 【Matrix Multiplication】
/*
行列の積

n×m の行列 A と m×l の行列 B を入力し、それらの積である n×l の行列 C を出力するプログラムを作成してください。
行列 C の各要素 cij は次の式で得られます：

cij= m∑k=1 aik bkj

ここで、A、B、C の各要素をそれぞれ aij、bij、cij とします。
*/

#include <bits/stdc++.h>
//-------------------------------------------
// #include <iostream>
// #include <vector>
// #include <algorythm>
//#include <ctype.h>
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

// intから桁和を求める関数
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
    while(true) {
      string s;
      cin >> s;
      
      if(s == "0") break;
      
      int ans = digit_sum(s);
      cout << ans << endl;
    }
    return 0;
}