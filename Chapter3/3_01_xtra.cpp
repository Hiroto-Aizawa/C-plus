// https://atcoder.jp/contests/abc079/tasks/abc079_b

// 【Lucas Number】

/*
【問題文】
今、日本は 11 月 18 日ですが、11 と 18 は隣り合うリュカ数です。
整数 N が与えられるので、N 番目のリュカ数を求めてください。
ただし、リュカ数は i 番目のリュカ数を Li とすると、
・L0 =2
・L1 =1
・Li =Li−1 +Li−2 (i≧2)
と定義される数とします。

【制約】
・1 ≦ N ≦ 86
・答えは 10^18 より小さいことが保証される
・入力は整数からなる

【入力例】
5
【出力例】
11

*/
#pragma region 提出版

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  long long l[87];
  cin >> n;
  
  l[0] = 2;
  l[1] = 1;
  for(int i=2; i <= n; i++) {
    //i番目のリュカ数を求める
    l[i] = l[i-2] + l[i-1];
  }
  cout << l[n] << endl;
}

#pragma endregion