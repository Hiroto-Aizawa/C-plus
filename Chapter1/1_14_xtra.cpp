// https://atcoder.jp/contests/apg4b/tasks/APG4b_ci

// 【三人兄弟の身長差】


#pragma region 提出版

#include "bits/stdc++.h"
using namespace std;

int main() {
  int A, B, C, maxInt, minInt;
  cin >> A >> B >> C;

  maxInt= max(max(A, B), C);
  minInt= min(min(A, B), C);

  cout << maxInt - minInt << endl;
}

#pragma endregion