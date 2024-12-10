// https://atcoder.jp/contests/apg4b/tasks/APG4b_i

// 【たこ焼きセット】

#pragma region 提出版

#include <bits/stdc++.h>
using namespace std;

int main() {
  int p;
  cin >> p;

  // パターン1
  if (p == 1) {
    int price;
    cin >> price;

    int N;
    cin >> N;
    cout << price * N << endl;
  }

  // パターン2
  if (p == 2) {
    string text;
    int price;
    cin >> text >> price;

    int N;
    cin >> N;

    cout << text << "!" << endl;
    cout << price * N << endl;
  }
}

#pragma endregion


#pragma region 解答例

#include <bits/stdc++.h>
using namespace std;

int main() {
  int p;
  cin >> p;

  // パターン2
  if (p == 2) {
    string text;
    cin >> text;
    cout << text << "!" << endl;
  }

  //パターン1と2で共通処理なのでifの外で実行する
  int price, N;
  cin >> price >> N;
  cout << price * N << endl;
}


#pragma endregion


