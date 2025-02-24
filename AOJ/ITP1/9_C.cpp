// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/9/ITP1_9_C

// 【Card Game】
/*
カードゲーム

太郎と花子がカードゲームをする。
二人はそれぞれn枚のカードを持っており、nターンの勝負を行う。
各ターンではそれぞれ１枚ずつカードを出す。
カードにはアルファベットからなる動物の名前が書かれており、辞書順で大きいものがそのターンの勝者となる。
勝者には３ポイント、引き分けの場合にはそれぞれ１ポイントが加算される。
太郎と花子の手持ちのカードの情報を読み込み、ゲーム終了後のそれぞれの得点を出力するプログラムを作成せよ。

制約
入力で与えられるｎが1000を超えることはない。
与えられる文字列の長さは100以下であり、アルファベットの小文字のみを含む。

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
    int n, tScore = 0, hScore = 0;
    cin >> n;
    
    rep(i, 0, n) {
        string s1, s2;
        cin >> s1 >> s2;
        
        if(s1 == s2){
            tScore += 1;
            hScore += 1;
            continue;
        }

        if(s1 < s2) hScore += 3;
        else tScore +=3;
    }
    
    cout << tScore << " " <<  hScore << endl;
    
    return 0;
}