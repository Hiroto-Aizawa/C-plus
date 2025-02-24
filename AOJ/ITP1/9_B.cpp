// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/9/ITP1_9_B

// 【Shuffle】
/*
シャッフル

１つのアルファベットが描かれた n 枚のカードの山をシャッフルします。
1回のシャッフルでは、下から h 枚のカードをまとめて取り出し、それを残ったカードの山の上に積み上げます。
カードの山は以下のように１つの文字列で与えられます。

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
    while(true){
        string s;
        cin >> s;
        if(s == "-") break;
        
        string alphabet = s;
        int m;
        cin >> m;
        
        rep(i, 0, m) {
        int h;
        cin >> h;
        // alphabet.substr(0, h) → 先頭からh枚を後ろに戻す
        // alphabet.subst(h, s.size() - h) h枚後ろに行った分を前に詰める
        alphabet = alphabet.substr(h, s.size() - h) + alphabet.substr(0, h);
        }
        cout << alphabet << endl;
    }
    
    return 0;
}