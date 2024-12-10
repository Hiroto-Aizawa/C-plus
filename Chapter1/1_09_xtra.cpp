// https://atcoder.jp/contests/apg4b/tasks/APG4b_cn

// 【複合代入演算子を使おう】

#pragma region 提出版

#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  // 1.の出力
  x++;
  cout << x << endl;

  // ここにプログラムを追記
  x *= (a + b);
  cout << x << endl;
  x *= x;
  cout << x << endl;
  x -= 1;
  cout << x << endl;
}

#pragma endregion

#pragma region 解答例

#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  x++;
  cout << x << endl;

  x *= a + b;
  cout << x << endl;

  x *= x;
  cout << x << endl;

  x--;
  cout << x << endl;
}

#pragma endregion