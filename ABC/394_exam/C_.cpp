// https://atcoder.jp/contests/abc394/tasks/abc394_c

/*
【問題文】
英大文字のみからなる文字列 S が与えられます。
S に対して、次の手順を行った後に得られる文字列を出力してください。

文字列が WA を（連続する）部分文字列として含む限り、次の操作を繰り返す。
  ・文字列中に登場する WA のうち最も先頭のものを AC に置換する。

なお、本問題の制約下で、この操作は高々有限回しか繰り返されないことが証明できます。

【制約】
S は長さ 1 以上 3×10 5  以下の英大文字のみからなる文字列

【入力】
入力は以下の形式で標準入力から与えられる。
S

【出力】
S に対して、問題文中に記された手順を行った後に得られる文字列を出力せよ。
*/

#pragma region 回答1(TLE)
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
    
    while(true) {
      string targetS="WA";
      if(s.find(targetS) == string::npos){
        break;
      }
      
      string prevS = "";
      string testS = "";
      // WAとなっている個所をACに置換し続ける
      // 文字列中にWAがないならループを抜けて文字列を出力する
      // WAが見つかったら、s.replace関数でACに置換する
      // WACWA
      // s.replace(1, 2, "AC");

      // 1つ前の文字列を記憶する
      // 1つ前と今の文字列を結合して、「WA」の場合は置換する
      // /WACWA
      rep(i, 0, s.size()) {
        
        if(i == 0){
          prevS = s[i];
          continue;
        }
        
        testS = prevS + s[i];
        if(testS == targetS) {
          s.replace(i-1, 2, "AC");
        }
        
        prevS = s[i];
      }
    }
    
    cout << s << endl;

    return 0;
}

#pragma endregion

#pragma region 回答2(AC)

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

    for (int i = 0; i < s.size() - 1; ++i) {
        // 'W'と'A'が連続しているかチェック
        if (s[i] == 'W' && s[i+1] == 'A') {
            s.replace(i, 2, "AC");  // "WA"を"AC"に置き換える
            i = max(i - 2, -1); // 置き換えた後、一文字戻って再チェック。最初の位置を越えないように調整
        }
    }

    cout << s << endl;  // 結果を出力

    return 0;
}

/*
### 修正内容
1. `i = max(i - 2, -1)` とすることで、`i--` によって `i` が負にならないようにし、最初の位置まで戻れるようにします。
2. `max(i - 2, -1)` の部分は、`i` が `0` より小さくならないようにするための工夫です。

### 出力例

- 入力 `WAA` の場合、`WA` が最初に見つかり、`AC` に置き換えます。その後 `i = 0` に戻り再度チェックして次の `A` を適切に処理して、最終的に出力は `ACC` となります。
*/

#pragma endregion