// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/9/ITP1_9_D

// 【Transformation】
/*
文字列 str に対して、与えられた命令の列を実行するプログラムを作成してください。
命令は以下の操作のいずれかです：

・print a b: str の a 文字目から b 文字目までを出力する。
・reverse a b: str の a 文字目から b 文字目までを逆順にする。
・replace a b p: str の a 文字目から b 文字目までを p に置き換える。
ここでは、文字列 str の最初の文字を 0 文字目とします。

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
using vl = vector<long long>;
using vvl = vector<vl>;
using vs = vector<string>;
using vvs = vector<vs>;
// pair
using psi = pair<string, int>;
using pii = pair<int, int>;
// tuple
using tsii = tuple<string, int, int>;
using tiii = tuple<int, int, int>;

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

// 文字列サイズの比較関数
bool compare(string & s1, string& s2) {
    return s1.size() < s2.size();
}

/*
///////////////////////////////////////////
/////////////////// MAIN //////////////////
///////////////////////////////////////////
*/

int main() {
    string s;
    cin >> s;
    
    int q;
    cin >> q;
    
    rep(i, 0, q) {
        string order;
        int a, b;
        cin >> order >> a >> b;
        
        if(order == "print") {
          // s = abcde, a = 0, b = 2 の場合
          // s.substr(a, b)だとabとなるが、問題の命令ではabcを出力するのが正しい
          // このギャップを解消するために開始位置が0の時だけ、
          // 抽出する長さを＋1するようにしている
          cout << s.substr(a, b - a + 1) << endl;
        } else if(order == "reverse") {
          // s = abcde, a = 0, b = 2 の場合
          // reverse(s.begin() + a, s.begin() + b)だと0~2番目ではなく、0を始点に長さ2を逆順にする
          // 期待している出力がcbadeの場合に、bacdeが出力される
          // そのため、reverse(s.begin() + a, s.begin() + b + 1)
          // にして期待している出力が行われるようにしている
          reverse(s.begin() + a, s.begin() + b + 1);
          //cout << "reverse: " << s << endl;
        } else {
          string t;
          cin >> t;
          s.replace(a, b - a + 1, t);
          //cout << "replace: " << s << endl;
        }
    }
    
    return 0;
}