// https://atcoder.jp/contests/apg4b/tasks/APG4b_b

// 【出力とコメント】

#pragma region キーポイント

//・「#include <bits/stdc++.h>」と「using namespace std;」は毎回最初に書く
//・C++のプログラムはmain関数から始まる
//・「cout << "文字列" << endl;」で文字列を出力できる
//・「//」や「/* */」でコメントが書ける

#pragma endregion

// プログラムの基本形
#pragma region プログラムの基本形
//--------------------------------------

#include <bits/stdc++.h>
using namespace std;
 
int main() {
}

//--------------------------------------
#pragma endregion

#pragma region 出力
//--------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << "Hello, world!" << endl;
  //実行結果
  //Hello, World!
}


//--------------------------------------
#pragma endregion

#pragma region 複数の出力
//--------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << "a";
  cout << "b" << endl;
  cout << "c" << "d" << endl;
  //出力結果
  //ab
  //cd
}


//--------------------------------------
#pragma endregion

#pragma region cout

//C++で文字列を出力するにはcout(しーあうと)を使います。
//※cはcharacterの略です。
//出力する文字列を指定している部分は「"Hello World!"」の部分です。
//C++プログラムの中で文字列を扱う場合、「" "」で囲う必要があります。
//「endl」は改行を表しています。
//「Hello, World!」と「endl」というデータを「<<」で「cout」に送っていくイメージで覚えると良い

#pragma endregion

#pragma region 細かい話

/*
「#include <bits/stdc++.h>」

#include <bits/stdc++.h>はC++の機能を「全て」読み込むための命令です。
例えばすでに紹介したcoutやendlは#include <bits/stdc++.h>によって読み込まれた機能です。
今後の解説で出てくるC++の機能の多くは#include <bits/stdc++.h>と書くことで利用できるようになります。
これを書かずに読み込みが必要な機能を使った場合、エラーが発生します。

機能は個別に読み込むこともできます。このページで用いたcoutとendlだけであれば、#include <iostream>と書くことによって読み込めます。
ただし、はじめのうちは機能の読み込み忘れによるエラーで詰まってしまうことがよくあるので、#include <bits/stdc++.h>を使って一括で読み込むことをおすすめします。

なお、#include <bits/stdc++.h>は業務におけるプログラミングでは推奨されないことがありますが、競技プログラミングやAPG4bで利用する場合は全く問題ありません。
bits/stdc++.hに関して詳しくは4.01.includeディレクティブおよびトップページの「bits/stdc++.hに関するQ&A」を読んでください。

「using namespace std;」
using namespace std;はプログラムを短く書くための機能です。#includeで読み込んだC++の機能を利用するためには、通常はstd::coutやstd::endlのようにstd::をはじめに付ける必要があります。 using namespace std;を利用すると、このstd::を省略して書くことができます。

なお、using namespace std;も業務におけるプログラミングでは推奨されないことがありますが、競技プログラミングやAPG4bで利用する場合は全く問題ありません。
これについて詳しくは4.02.名前空間を読んでください。
*/

#pragma endregion