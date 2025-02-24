// https://atcoder.jp/contests/apg4b/tasks/APG4b_bz

// 【最頻値】

/*
【問題文】
N要素の配列A1 ,A2 ,…,AN が与えられます。 
この配列の中の値のうち、出現回数が最も多い値とその出現回数を求めてください。

ただし、出現回数が最大になる値は複数存在しないものとします。

制約が大きいため計算量に注意してプログラムを作成してください。

【制約】
0≤N≤10^5
0≤Ai ≤10^9 (1≤i≤N)
出現回数が最大になるような値は複数存在しない。

【入力】
入力は次の形式で標準入力から与えられます。
```
N
A1  A2… AN
```

【出力】
```値 出現回数```

出現回数が最も多い値と、その出現回数をスペース区切りで出力してください。

*/

#pragma region 提出版

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
    int n;
    cin >> n;
    
    map<int, int> m;
    
    rep(i, 0, n){
        int a;
        cin >> a;
        m[a] += 1;
    }
    
    int maxCnt = 0;
    int ansVal = 0;
    
    for(auto p : m){
        int key = p.first;
        int val = p.second;
        if(maxCnt < p.second){
            maxCnt = p.second;
            ansVal = p.first;
        }
    }
    
    cout << ansVal << " " << maxCnt << endl;
    
    return 0;
}

#pragma endregion