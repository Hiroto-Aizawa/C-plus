// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/7/ITP1_7_A

// 【Grading】
/*
成績

あなたの課題は、あるクラスの数学の成績を付けるプログラムを作成することです。

プログラムは複数の学生のテストの点数を読み込みます。

テストの点数は、中間試験の点数 m、期末試験の点数 f、再試験の点数 r で構成されています。

中間試験と期末試験は 50 点満点（m, f ≤ 50）、再試験は 100 点満点 （r ≤ 100）です。

試験を受けていない場合は点数を -1 とします。

以下の手順で成績が付けられます：

中間試験、期末試験のいずれかを欠席した場合成績は F。
中間試験と期末試験の合計点数が 80 以上ならば成績は A 。
中間試験と期末試験の合計点数が 65 以上 80 未満ならば成績は B。
中間試験と期末試験の合計点数が 50 以上 65 未満ならば成績は C。
中間試験と期末試験の合計点数が 30 以上 50 未満ならば成績は D。 ただし、再試験の点数が 50 以上ならば成績は C。
中間試験と期末試験の合計点数が 30 未満ならば成績は F。
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
using vs = vector<string>;

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

/*
///////////////////////////////////////////
/////////////////// MAIN //////////////////
///////////////////////////////////////////
*/

int main() {
    // int n;
    // cin >> n;
    
    // string s;
    // cin >> s;
    
    // vector<int> a(n, 0);
    // rep(i, 0, n) cin >> a[i];
    
    int m = 0, f = 0, r = 0;
    
    while(true) {
      cin >> m >> f >> r;
      if(m == -1 && f == -1 && r == -1) break;
      
      int sum = m + f;
      
      if(m == -1 || f == -1) cout << "F" << endl;
      else if(80 <= sum) cout << "A" << endl;
      else if(65 <= sum && sum < 80) cout << "B" << endl;
      else if(50 <= sum && sum < 65) cout << "C" << endl;
      else if(30 <= sum) {
        if(50 <= r) cout << "C" << endl;
        else cout << "D" << endl;
      }
      else cout << "F" << endl;
    }
    
    return 0;
}