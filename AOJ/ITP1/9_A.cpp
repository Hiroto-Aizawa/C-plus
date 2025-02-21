// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/9/ITP1_9_A

// 【Finding a Word】
/*
単語の検索

１つの単語 W と文章 T が与えられます。T の中にある W の数を出力するプログラムを作成して下さい。
文章 T に含まれるスペースまたは改行で区切られた文字列を単語 Ti とします。
すべての Ti において単語 W と同じになるものを数えて下さい。

なお、大文字と小文字は区別しません。

制約
・Wの文字列の長さは10を超えない
・Wに含まれる文字はすべてアルファベット小文字である
・Tの１行あたりの文字列の長さは1000を超えない
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
    string w, t;
    int cnt = 0;
    cin >> w;
    
    while(true){
      cin >> t;
      if(t == "END_OF_TEXT") break;
      
      // 文字列のtを小文字に変換
      transform(t.begin(), t.end(), t.begin(), ::tolower);
      
      if(t == w) cnt++;
    }
    cout << cnt << endl;
    
    return 0;
}