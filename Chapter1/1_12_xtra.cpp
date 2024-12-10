// https://atcoder.jp/contests/apg4b/tasks/APG4b_ck

// 【足したり引いたり】


#pragma region 提出版

#include "bits/stdc++.h"
using namespace std;

int main() {
  string S;
  cin >> S;
  int ans = 1;
  // ここにプログラムを追記
  for(char c : S){
      if(c == '+') ans++;
      else if(c == '-') ans--;
      else continue;
  }
 
  cout << ans << endl;
}

#pragma endregion