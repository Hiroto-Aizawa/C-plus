// https://atcoder.jp/contests/abc086/tasks/arc089_a

/*
【問題文】
シカのAtCoDeerくんは二次元平面上で旅行をしようとしています。 
AtCoDeerくんの旅行プランでは、時刻 0 に 点 (0,0) を出発し、
1 以上 N 以下の各 i に対し、時刻 ti に 点(xi, yi ) を訪れる予定です。

AtCoDeerくんが時刻 t に 点 (x,y) にいる時、 時刻 t+1 には 点 (x+1,y), (x−1,y), (x,y+1), (x,y−1)
のうちいずれかに存在することができます。 
その場にとどまることは出来ないことに注意してください。 
AtCoDeerくんの旅行プランが実行可能かどうか判定してください。

【制約】
・1 ≤ N ≤ 10^5
・0 ≤ xi ≤ 10^5
・0 ≤ yi ≤ 10^5 
・1 ≤ ti​ ≤ 10^5 
・ti < ti+1 (1 ≤ i ≤ N−1)
・入力は全て整数

【入力】
入力は以下の形式で標準入力から与えられる。

N
t1 x1 y1
t2 x2 y2
:
tN xN yN
​
【出力】
旅行プランが実行可能ならYesを、不可能ならNoを出力してください。 
*/

#pragma region 回答

#include <bits/stdc++.h>
//-------------------------------------------
#include <cmath>
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
    int N;
    cin >> N;

    int nowt = 0, nowx = 0, nowy = 0; // 現在時刻と位置
    bool canArrive = true;                 // 旅行プランが実行可能？
    for (int i = 0; i < N; ++i) {
        int x, y, t;
        cin >> t >> x >> y; // 目的時刻と目的地
        for (; nowt < t; ++nowt) { // 一秒ずつシミュレーション
            if (x != nowx) {
                nowx += x < nowx ? -1 : 1; // xがずれていたらx方向に近づく
            } else {
                nowy += y < nowy ? -1 : 1; // xがずれていないのでy方向に近づく
            }
        }
        if (x != nowx || y != nowy) { // 目的地にたどりつけなかったら実行不可能
            canArrive = false;
        }
    }

    cout << (canArrive ? "Yes" : "No") << endl;
}

#pragma endregion

#pragma region 解答

#include <iostream>
using namespace std;

int main() {
    int N;
    int t[110000], x[110000], y[110000];
    cin >> N;
    t[0] = x[0] = y[0] = 0;  // 初期状態
    for (int i = 0; i < N; ++i) cin >> t[i+1] >> x[i+1] >> y[i+1];  // 1-index にしておく

    bool can = true;
    for (int i = 0; i < N; ++i) {
        int dt = t[i+1] - t[i];
        int dist = abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);
        if (dt < dist) can = false;
        if (dist % 2 != dt % 2) can = false;  // dist と dt の偶奇は一致する必要あり！
    }
    
    if (can) cout << "Yes" << endl;
    else cout << "No" << endl;
}

#pragma endregion