// 

// 【2つ目の値でソート】

/*
【問題文】
整数ai, bi のペア(ai, bi )がN個与えられます(1 ≤ i ≤ N)。 bi が小さい順にペアを並べ替えてください。

【制約】
1 ≤ N ≤ 100
1 ≤ ai, bi ≤ 10^9
bi は全て異なる
入力はすべて整数

【入力】
入力は次の形式で標準入力から与えられます。

N
a1  b1
​a2  b2
︙ ︙
aN  bN
​

【出力】
ペアを並べ替えた順に1行毎に出力してください。 
各ペアはai 、bi をスペース区切りで出力してください。
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
    
    vector<pair<int, int>> p(n);
    rep(i, 0, n){
        int a, b;
        cin >> a >> b;
        p[i] = make_pair(b, a);
    }
    
    sort(p.begin(), p.end());
    
    rep(i, 0, n) {
        int b, a;
        tie(b, a) = p[i];
        cout << a << " " << b << endl;
    }
    
    // 範囲for文での出力方法
    // for(pair<int, int> e : p) {
    //   cout << e.second << " " << e.first << endl;
    // }

    return 0;
}

#pragma endregion