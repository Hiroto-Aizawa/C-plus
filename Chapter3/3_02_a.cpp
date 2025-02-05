// https://atcoder.jp/contests/apg4b/tasks/APG4b_z

// 【pair/tupleとauto】

/*
キーポイント

[pair]
・pair型は2つの値の組を表す
・pair<値1の型, 値2の型> 変数名;で宣言する
・変数名.firstで1番目の値、変数名.secondで2番目の値にアクセスできる
・make_pair(値1, 値2)でpairを生成することができる
・tie(変数1, 変数2) = pair型の値;でpairを分解することができる

[tuple]
・tuple型は複数個の値の組を表す
・tuple<値1の型, 値2の型, 値3の型, (...)> 変数名;(必要な分だけ型を書く)で宣言する
・make_tuple(値1, 値2, 値3, (...))でtupleを生成することができる
・tie(変数1, 変数2, 変数3, (...)) = tuple型の値;でtupleを分解することができる

[pair/tupleの比較]
・1番目の値から比較され、等しい場合は次の値で比較される

[auto]
・変数宣言や範囲for文において、autoを用いることで、型を省略して書くことができる
・autoで参照を作ることもできる
*/

// 【pair/tuple】
// [pair]
#include <bits/stdc++.h>
using namespace std;

int main() {
  pair<string, int> p("abc", 3);
  cout << p.first << endl;  // abc

  p.first = "hello";
  cout << p.first << endl;  // hello
  cout << p.second << endl; // 3

  p = make_pair("*", 1);

  string s;
  int a;
  tie(s, a) = p;
  cout << s << endl;  // *
  cout << a << endl;  // 1
  /*
  【出力結果】
  abc
　hello
　3
　*
　1
  */
}

/*
[宣言・初期化]
pair<型1, 型2> 変数名;
pair<型1, 型2> 変数名(値1, 値2);

[アクセス]
変数名.first   // 1つ目の値
変数名.second  // 2つ目の値

[pairの生成]
make_pair(値1, 値2)
make_pairによってpair型の値を得ることができます。

また、次のようにすることでもpairを生成することができます。

pair<型1, 型2>(値1, 値2)

どちらを使っても構いませんが、make_pairでは型を明示的に書く必要がないのでmake_pairを使うとよいでしょう。
細かい話で扱う型エイリアスを用いてpairの型に簡単な名前を付ける場合、後者の方が楽に書ける場合もあります。

[pairの分解]

型1 変数1;
型2 変数2;
tie(変数1, 変数2) = pair型の値;

変数1、変数2にそれぞれpairの1番目の値、2番目の値が代入されます。
*/