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
    
    // string s;
    // cin >> s;
    
    // vector<int> a(n, 0);
    // rep(i, 0, n) cin >> a[i];
    vvi matrixA(n, vi(m, 0));
    vvi matrixB(m, vi(l, 0));
    vvi matrixC(n, vi(l, 0));
    
    
    int sumR = 0, sumC = 0, sumRC = 0;
    
    rep(i, 0, n) {
      rep(j, 0, m) {
        cin >> matrixA[i][j];
        // if(j == m-1) cout << matrixA[i][j] << endl;
        // else cout << matrixA[i][j] << " " ;
      }
    }
    
    rep(i, 0, m) {
      rep(j, 0, l) {
        cin >> matrixB[i][j];
        // if(j == l-1) cout << matrixB[i][j] << endl;
        // else cout << matrixB[i][j] << " " ;
      }
    }
    
    rep(i, 0, n) {
      rep(j, 0, l) {
        matrixC[i][j] = matrixA[i][j] * matrixB[i][j];
      }
    }
    
    return 0;
}