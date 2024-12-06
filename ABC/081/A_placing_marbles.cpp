// https://atcoder.jp/contests/abc081/tasks/abc081_a

/*
問題文
すぬけ君は 1,2,3 の番号がついた 3 つのマスからなるマス目を持っています。
各マスには 0 か 1 が書かれており、マス i には s iが書かれています。

すぬけ君は 1 が書かれたマスにビー玉を置きます。 ビー玉が置かれるマスがいくつあるか求めてください。

制約
s1, s2, s3は 1 あるいは 0

入力例
101
出力零
2
*/

#pragma region 提出版

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string s;
  int ans = 0;
  
  cin >> s;
  
  //範囲ベースfor文
  for(char c : s ){
    if(c == '1') ans++;
  }
  
  cout << ans << endl;
}

#pragma endregion