// https://atcoder.jp/contests/apg4b/tasks/APG4b_p

// 【関数】

#include <bits/stdc++.h>
using namespace std;

// 関数定義
// ※ main関数よりも前で行う（関数は宣言した行より後でしか呼び出せないため）
int my_min(int x, int y) {

  if (x < y) {
    return x;
  }
  else {
    return y;
  }

}

int main() {
  int answer = my_min(10, 5);
  cout << answer << endl; // 5
}

// プロトタイプ宣言
// ※ 「関数の名前」と「引数と戻り値の型」だけを先に宣言する

#include <bits/stdc++.h>
using namespace std;

// プロトタイプ宣言
// 返り値の型 関数名(引数1の型 引数1の名前, 引数2の型 引数2の名前, ...);
void hello();

int main() {
  // プロトタイプ宣言をしたので呼び出せる
  hello();
}

void hello() {
  cout << "hello!" << endl;
  return;
}
