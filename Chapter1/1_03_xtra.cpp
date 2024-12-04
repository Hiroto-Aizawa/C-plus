// https://atcoder.jp/contests/apg4b/tasks/APG4b_ct

/*
Aくんは
1から
100までの和を求めようと思いました。
数学の授業で習ったとおり、
1から
100までの和は次の式で求められます。

1 / 2 × 100 × (100+1)

この式の値を出力してください。
*/

#pragma region 提出版

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  //割り算はできるだけ後の方に行うと正しい結果になる
  cout << 100 * (100 + 1) / 2 << endl;
}

#pragma endregion 