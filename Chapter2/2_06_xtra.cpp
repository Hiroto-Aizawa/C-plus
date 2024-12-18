// https://atcoder.jp/contests/apg4b/tasks/APG4b_cb

// 【計算量の見積もり】

/*
問題文
次のプログラムではf0〜f5の6つの関数が定義されており、main関数から呼び出されています。 
それぞれの関数の計算量を見積もって、最も計算時間のかかる関数を呼び出している行をコメントアウトしてください。

制限時間は2秒です。AtCoderのジャッジでは1秒あたり
10^8 回程度の計算が可能です。不正解だった場合となります。
制約を読み、各関数の実行時間を見積もりましょう。

【制約】
・0≤N≤10^6
・0≤M≤10^2
*/

#pragma region 提出版

#include <bits/stdc++.h>
using namespace std;

int f0(int N) {
  return 1;
}

int f1(int N, int M) {
  int s = 0;
  for (int i = 0; i < N; i++) {
    s++;
  }
  for (int i = 0; i < M; i++) {
    s++;
  }
  return s;
}

int f2(int N) {
  int s = 0;
  for (int i = 0; i < N; i++) {
      int t = N;
      int cnt = 0;
      while (t > 0) {
        cnt++;
        t /= 2;
      }
      s += cnt;
  }
  return s;
}


int f3(int N) {
  int s = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      s++;
    }
  }
  return s;
}

int f4(int N) {
  int s = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      s += i + j;
    }
  }
  return s;
}

int f5(int N, int M) {
  int s = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      s += i + j;
    }
  }
  return s;
}

int main() {
  int N, M;
  cin >> N >> M;

  int a0 = -1, a1 = -1, a2 = -1, a3 = -1, a4 = -1, a5 = -1;

  // 計算量が最も大きいもの1つだけコメントアウトする
  a0 = f0(N);
  a1 = f1(N, M);
  a2 = f2(N);
  a3 = f3(N);
  //制約の最大値を見ると、N=10^6、M=10^2となっており、Nの方が大きい
  // a4 = f4(N); 
  a5 = f5(N, M);

  cout << "f0: " << a0 << endl;
  cout << "f1: " << a1 << endl;
  cout << "f2: " << a2 << endl;
  cout << "f3: " << a3 << endl;
  cout << "f4: " << a4 << endl;
  cout << "f5: " << a5 << endl;
}

#pragma endregion