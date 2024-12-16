// https://atcoder.jp/contests/apg4b/tasks/APG4b_u

// 【参照】

/*
【キーポイント】
参照先の型 &参照の名前 = 参照先;で参照を宣言できる
通常の変数のように参照を宣言するときは参照先を指定する必要がある
関数の引数に参照を用いる場合は、その関数を呼び出す時に渡した変数が参照先になる
参照先を後から変更することはできない
引数が参照になっている関数を呼び出すことを参照渡しという
参照渡しは、無駄なコピーを避けたり複数の結果を返したいときに便利
*/

//【参照】
#pragma region 参照の名前

#include <bits/stdc++.h>
using namespace std;

int main() {
  int a = 3;
  int &b = a;  // bは変数aの参照

  cout << "a: " << a << endl;  // aの値を出力
  cout << "b: " << b << endl;  // bの参照先の値を出力(aの値である3が出力される)

  b = 4;  // 参照先の値を変更(aが4になる)

  cout << "a: " << a << endl;  // aの値を出力
  cout << "b: " << b << endl;  // bの参照先の値を出力(aの値である4が出力される)
}

/*
実行結果

a: 3
b: 3
a: 4
b: 4

変数の宣言方法と似ていますが、通常の変数とは違い参照変数自体の値にアクセスすることはできません。
参照変数に対してアクセスを行うように書くと、そのアクセスが参照先についてなされるイメージです。
*/


#pragma endregion


/*
【参照の宣言】
参照は次のように宣言します。
```
参照先の型 &参照の名前 = 参照先;
```
基本的には宣言時に参照先を指定して初期化する必要がある点に注意してください。
また、あとから参照先を変更することはできません。

例:
int a = 123;
int &b = a;  // int型変数aへの参照

string s = "apg4b";
string &t = s;  // string型変数sへの参照

vector<int> v = {1, 2, 3, 4, 5};
vector<int> &w = v;  // vector<int>型変数vへの参照

int &c;  // 参照先が指定されていないためコンパイルエラーになる

*/

/*
【参照のアクセス】

*/