// https://atcoder.jp/contests/abs/tasks/abc085_b

/*
【問題文】
X 段重ねの鏡餅 (X≥1) とは、X 枚の円形の餅を縦に積み重ねたものであって、
どの餅もその真下の餅より直径が小さい（一番下の餅を除く）もののことです。
例えば、直径 10、8、6 センチメートルの餅をこの順に下から積み重ねると 3 段重ねの鏡餅になり、
餅を一枚だけ置くと 1 段重ねの鏡餅になります。

ダックスフンドのルンルンは N 枚の円形の餅を持っていて、そのうち i 枚目の餅の直径は di センチメートルです。
これらの餅のうち一部または全部を使って鏡餅を作るとき、最大で何段重ねの鏡餅を作ることができるでしょうか。

【制約】
・1 ≤ N ≤ 100
・1 ≤ di ≤100
・入力値はすべて整数である。
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 0, alice = 0, bob = 0;
  int d[n];
  
  for(int i=0; i < n; i++) cin >> d[i];
  
  //降順ソート
  sort(d, d+n, greater<int>());
  int prev = 0, cnt = 1;
  for(int i=0; i < n; i++) {
    if(prev == d[i]) continue;
    
    if(d[i] < prev) cnt++;
    
    prev = d[i];
  }
  cout << cnt << endl;
}

#pragma region 解答

#include <iostream>
#include <algorithm>
using namespace std;

#define rep(i,a,n) for(int i=a; i < n; i++)
int main() {
  int n, d[101];
  cin >> n;

  rep(i, 0, n) cin >> d[i];

  set<int> se;
  rep(i,0,n) se.insert(d[i]);

  int ans = se.size();
  cout << ans << endl;

}

#pragma endregion

