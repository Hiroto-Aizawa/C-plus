// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/8/ITP1_8_A

// 【Toggling Cases】
/*
大文字と小文字の入れ替え

与えられた文字列の小文字と大文字を入れ替えるプログラムを作成してください。
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
// #include <ctype.h>
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
    string s;
    // 文字列の入力を格納する（改行があるまで、空白も含んで入力可能）
    getline(cin, s);
    
    for(char c : s) {
      if (islower(c)) cout << (char)toupper(c);
      else cout << (char)tolower(c);
    }
    cout << endl;
    
    return 0;
}