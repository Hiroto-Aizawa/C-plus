// https://atcoder.jp/contests/abc084/tasks/abc084_a

// 問題文
// 12 月 30 日の M 時から次の年になるまでは何時間か、求めてください。

// 制約
// ・1 <= M <= 23
// ・入力は全て整数

// 入力
// M

// 出力
// 12月30日のM時から次の年になるまでがX時間のとき、Xを出力せよ。

// 入力例
// 21
// 出力例
// 27


#include <bits/stdc++.h>
using namespace std;

int main() {
  // ここにプログラムを追記
  int m;
  int x = 48;
  
  cin >> m ;
  
  cout << x - m << endl;
}