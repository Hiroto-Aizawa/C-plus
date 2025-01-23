// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/7

// 【Matrix Multiplication】
/*
行列の積

n×m の行列 A と m×l の行列 B を入力し、それらの積である n×l の行列 C を出力するプログラムを作成してください。
行列 C の各要素 cij は次の式で得られます：

cij= m∑k=1 aik bkj

ここで、A、B、C の各要素をそれぞれ aij、bij、cij とします。
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
    int n, m, l;
    cin >> n >> m >> l;
    vvi matrixA(n, vi(m, 0));
    vvi matrixB(m, vi(l, 0));
    
    rep(i, 0, n) {
      rep(j, 0, m) {
        cin >> matrixA[i][j];
      }
    }
    
    rep(i, 0, m) {
      rep(j, 0, l) {
        cin >> matrixB[i][j];
      }
    }
    
    rep(i, 0, n) {
      rep(j, 0, l) {
        ll ci = 0;
        rep(k,0, m) {
          // 行列の積　求め方
          // https://lab-brains.as-1.co.jp/enjoy-learn/2023/07/50258/#toc_02
          ci += matrixA[i][k] * matrixB[k][j];
        }
        if(j == l-1) cout << ci << endl;
        else cout << ci << " ";
      }
    }
    return 0;
}