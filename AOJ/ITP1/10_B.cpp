// 

// 【Triangle】
/*
三角形

三角形の２辺 a, b とその間の角 C から、
その三角形の面積 S、周の長さ L, a を底辺としたときの高さ h を求めるプログラムを作成して下さい。
*/

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
    double a, b, theta, rad, s, l, h;
    cin >> a >> b >> theta;
    
    //角度をラジアンに変換する
    rad = theta * M_PI / 180;
    s = 0.5 * a * b * sin(rad);
    //余弦定理で辺cを求める
    double c = sqrt(a * a + b * b - 2 * a * b * cos(rad) );
    l = a + b + c;
    h = 2 * s / a;
    
    cout << fixed<<setprecision(6)<< s << endl;
	  cout << fixed << setprecision(6) << l << endl;
	  cout << fixed << setprecision(6) << h << endl;
    return 0;
}