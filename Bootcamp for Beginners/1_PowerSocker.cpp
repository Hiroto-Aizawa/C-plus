// https://atcoder.jp/contests/abc139/tasks/abc139_b

/*
【問題文】
高橋くんの家には電源プラグの差込口が 1 口しかありません。
そこで、高橋くんは A 個口の電源タップをいくつか使って未使用の差込口を B 口以上に拡張したいと考えています。
A 個口の電源タップ 1 つと未使用の差込口 1 口を使って、新たに差込口を A 口増やすことができます。
最小でいくつの電源タップが必要でしょうか。

【制約】
・入力は全て整数である。
・2 ≤ A ≤ 20
・1 ≤ B ≤ 20
*/

#pragma region 提出版

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B;
  cin >> A >> B;
  
  // 電源タップ数
  int cnt = 0;
  // 差込口の数
  int slot= 1;
  // 増加量 increment
  int i = A - 1;

  while(slot < B){
    slot += i;
    cnt++;
  }
  
  cout << cnt << endl;
}

#pragma endregion