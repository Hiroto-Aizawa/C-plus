// https://atcoder.jp/contests/apg4b/tasks/APG4b_cg

// 【隣り合う同じ値を探す】

/*
問題文
5つの要素からなる配列が与えられます。 同じ値の要素が隣り合っているような箇所が存在するかどうかを判定してください。
存在するなら"YES"を、存在しなければ"NO"を出力してください。

この問題も以下の手順で解いてみましょう。

1.ループを使わないで書く
2.パターンを見つける
3.ループで書き直す

*/

#pragma region 1.ループを使わないで書く

#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  // ここにプログラムを追記
  if(data[0] == data[1] || data[1] == data[2] || data[2] == data[3] || data[3] == data[4]){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

#pragma endregion

#pragma region 2.パターンを見つける

#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  // data[i] == data[i+1]の比較をしている
  if(data[0] == data[1] || data[1] == data[2] || data[2] == data[3] || data[3] == data[4]){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

}

#pragma endregion

#pragma region 3.ループで書き直す

#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  // ここにプログラムを追記
  bool ans = false;

  // i < data.size() の条件だと、forの最後で data[i] == data[i+1] がOutOfRangeでエラーになる
  // そのため、i < data.size() - 1 にしている
  for(int i=0; i < data.size() - 1; i++){
    if(data[i] == data[i+1]) ans = true;
  }

  if(ans) cout << "YES" << endl;
  else cout << "NO" << endl;
}

#pragma endregion