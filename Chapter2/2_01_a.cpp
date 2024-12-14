// https://atcoder.jp/contests/apg4b/tasks/APG4b_r

// 【ループの書き方と範囲for文】

#pragma region ループの書き方
/*
例題

整数a と5個の整数 x1 ,x2 ,x3 ,x4 ,x5 が与えられます。
5個の整数のうちaと等しいものの個数をfor文を使って求めてください。

入力例
3
1 3 2 5 3

出力例
2
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  cin >> a;
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  // ここにプログラムを追記
  int count = 0;

  for(int i=0; i < data.size(); i++;){
    if(data[i] == a) count++;
  }

  cout << count << endl;
}


#pragma endregion


// 範囲for文
#pragma region  範囲for文

#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a = {1, 3, 2, 5};
  string s = "Hello";
  //配列や文字列から要素を一つ取り出して使用する
  for (int x : a) {
    cout << x << endl;
  }

  for (char c : s) {
    cout << c << endl;
  }
}

#pragma endregion

#pragma region ループ構文の使い分け

/*
・配列の全ての要素に対する処理を行う場合 → 範囲for文
・それ以外で一定回数繰り返し処理をする場合 → for文
・それ以外の(何回繰り返せばいいか分からない)場合 → while文
*/


/*
// 【while文が適しているケース】
「整数Nがあるとき、Nが2で最大で何回割り切れるかを求める」という処理を考えます。 
 この処理は配列の要素に対する処理ではありませんし、
具体的に何回処理を繰り返せば良いのかということも分かりません。
 この処理にはwhile文が適しているでしょう。
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int count = 0;
  while (N > 0) {
    // 2で割り切れなければループを抜ける
    if (N % 2 > 0) {
      break;
    }
    N = N / 2;
    count++;
  }
  cout << count << endl;
}

#pragma endregion