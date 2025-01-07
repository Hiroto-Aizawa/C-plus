// https://atcoder.jp/contests/abc088/tasks/abc088_b

/*
【問題文】
N 枚のカードがあります. 
i 枚目のカードには, ai  という数が書かれています.
Alice と Bob は, これらのカードを使ってゲームを行います. 
ゲームでは, Alice と Bob が交互に 1 枚ずつカードを取っていきます. Alice が先にカードを取ります.
2 人がすべてのカードを取ったときゲームは終了し, 取ったカードの数の合計がその人の得点になります. 
2 人とも自分の得点を最大化するように最適な戦略を取った時, Alice は Bob より何点多く取るか求めてください.

【制約】
・N は 1 以上 100 以下の整数
・ai ( 1 ≤ i ≤ N) は 1 以上 100 以下の整数
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 0, alice = 0, bob = 0;
  int a[n];
  
  for(int i=0; i < n; i++) cin >> a[i];
  
  //降順ソート
  sort(a, a+n, greater<int>());
  
  for(int i=0; i < n; i++) {
    if(i % 2 == 0)  alice += a[i];
    else bob += a[i];
  }
  cout << alice - bob << endl;
}