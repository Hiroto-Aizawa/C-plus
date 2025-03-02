// https://atcoder.jp/contests/abc395/tasks/abc395_b

/*
【問題文】
概要：以下のような N×N の模様を作成してください。

###########
#.........#
#.#######.#
#.#.....#.#
#.#.###.#.#
#.#.#.#.#.#
#.#.###.#.#
#.#.....#.#
#.#######.#
#.........#
###########

正整数 
N が与えられます。

N×N のグリッドがあります。
このグリッドの上から i 行目、左から j 列目のマスをマス (i,j) と表します。
はじめ、どのマスにも色は塗られていません。

これから、i=1,2,…,N の順に、以下の操作を行います。

・j = N + 1 − i とする。
・i ≤ j であるならば、i が奇数ならば黒、偶数ならば白で、
マス (i,i) を左上、マス (j,j) を右下とする矩形領域に含まれるマスを塗りつぶす。
このとき、既に色が塗られているマスについては色を上書きする。
・i > j であるならば、何もしない。

すべての操作を行った後、色が塗られていないマスが存在しないことが証明できます。
最終的に各マスがどの色で塗られているかを求めてください。

【入力】
・1 ≤ N ≤ 50
・入力はすべて整数

【出力】
N 行出力せよ。
i 行目には、最終的にグリッドの i 行目に塗られている色を以下のような長さ N の文字列 Si  として出力せよ。
入出力例も参考にすること。

・マス (i,j) が最終的に黒で塗られているならば、Si  の j 文字目は # である。
・マス (i,j) が最終的に白で塗られているならば、Si  の j 文字目は . である。

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
    int n;
    cin >> n;
    
    vector<vector<char>> grid(n, vector<char>(n, '#'));
    
    int j = 0;
    rep(i, 0, n) {
        if(i > 1) {
            j = n + 1 - i;
        
            if(i <= j) {
                char color = (i % 2 == 1) ? '#' : '.';
                
                for(int row=i-1; row <= j-1; row++) {
                    for(int col=i-1; col <= j-1; col++) {
                        grid[row][col] = color;
                    }
                }
            }
        }
    } 
    
    string result;
    
    rep(i, 0, n) {
        rep(j, 0, n) {
            result += grid[i][j];
        }
        result += '\n';
    }
    
    cout << result;
    return 0;
}

#pragma endregion

#pragma region 解答

#include <bits/stdch++.h>
usign namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    vector<string> s(n, string(n, '.'));

    rep(l, n) {
        int r = n-1-l;
        if(l > r) continue;

        char c = '#';

        if(l % 2) c = '.';
        for(int i=l; i <= r; i++) {
            for(int j=l; j <=r; j++) {
                s[i][j] = c;
            }
        }
    }

    rep(i, n) cout << s[i] << endl;
    return 0;
}

#pragma endregion