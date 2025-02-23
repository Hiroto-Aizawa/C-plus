// https://atcoder.jp/contests/abc394/tasks/abc394_b

/*
【問題文】
英小文字からなる N 個の文字列 S1 ,S2 ,…,SN  が与えられます。
ここで、文字列の長さはそれぞれ相異なります。
これらの文字列を長さの昇順に並べ替え、この順に結合して得られる文字列を求めてください。

【制約】
・2≤N≤50
・N は整数
・Si  は長さ 1 以上 50 以下の英小文字からなる文字列
・i ≠ j のとき Si と Sj  の長さは異なる

【入力】
入力は以下の形式で標準入力から与えられる。
N
S1
S2
⋮
SN

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

bool compare(string & s1, string& s2) {
  return s1.size() < s2.size();
}

/*
///////////////////////////////////////////
/////////////////// MAIN //////////////////
///////////////////////////////////////////
*/

int main() {
    int n;
    cin >> n;
    
    vector<string> s(n);

    rep(i, 0, n){
        cin >> s[i];
    }
    
    sort(s.begin(), s.end(), compare);
    
    string ans;
    for(auto ss : s) {
        ans += ss;
    }
    cout << ans << endl; 

    return 0;
}s

#pragma endregion


// 【参考】
// https://qiita.com/kemkemG0/items/76988e8e62c8a2a9c90a