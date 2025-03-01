// https://atcoder.jp/contests/abc395/tasks/abc395_a

/*
【問題文】
正整数 N と、長さ N の正整数列 A=(A1 ,A2 ,…,AN ) が与えられます。
A が狭義単調増加であるとは、 1 ≤ i <N なるすべての整数 i について 
Ai <Ai+1 が成り立つことをを指します。

A が狭義単調増加であるか判定してください。

【制約】
・2 ≤ N ≤ 100
・1 ≤ Ai ≤ 1000 (1 ≤ i ≤ N)
・入力はすべて整数

【入力】
入力は以下の形式で標準入力から与えられる。

N
A1  A2  … AN

【出力】
A が狭義単調増加であるならば Yes と、そうでないならば No と出力せよ。

正誤判定器は大文字と小文字を区別せず、どちらも受理する。
例えば、答えが Yes となるときに yes や YES、yEs などと出力しても正解と判定される。
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
    // string s;
    // cin >> s;
    
    int n;
    cin >> n;
    vi a(n);
    
    rep(i, 0, n) {
        cin >> a[i];
    } 
    
    rep(i, 0, n){
        if(i == 0) continue;
        
        if(a[i-1] < a[i]) continue;
        else {
            No;
            return 0;
        }
    }
    Yes;
    
    return 0;
}

#pragma endregion