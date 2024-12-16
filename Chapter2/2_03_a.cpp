// https://atcoder.jp/contests/APG4b/tasks/APG4b_t

// 【多次元配列】

/*
【キーポイント】

・2次元配列は2次元の表を扱うときに便利
・vector<vector<要素の型>> 変数名(要素数1, vector<要素の型>(要素数2, 初期値))で宣言できる
・初期値は省略可能
・変数名.at(i).at(j) or 変数名[i][j]でi行目j列目へアクセスできる
・変数名.size() or sizeof(変数名)で縦の大きさを取得できる
・変数名.at(0).size()で横の大きさを取得できる

・要素を指定して初期化する例
    vector<vector<int>> data = {
    {7, 4, 0, 8},
    {2, 0, 3, 5},
    {6, 1, 7, 0},
    };

・2次元以上の配列を多次元配列という
・vectorをN個入れ子にしたものをN次元配列という

*/


#pragma region 例題


/*
縦3行、横4列の整数が書かれた表があります。この表に何個の0が含まれているかを求めてください。

【入力】
7	4	0	8
2	0	3	5
6	1	7	0

【出力】
3

*/

#include <bits/stdc++.h>
using namespace std;

int main() {

  // int型の2次元配列(3×4要素の)の宣言
  // 列 x 行の順番
  vector<vector<int>> data(3, vector<int>(4));

  // 0の個数を数える
  int count = 0;
  
  // 入力 (2重ループを用いる)
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> data[i].at[j];

      if (data.at[i].at[j] == 0) count++;
    }
  }

//   // 列の数：3
//   for (int i = 0; i < data.size(); i++) {
//     // 行の数：4
//     for (int j = 0; j < data[0].size(); j++) {

//       // 上からi番目、左からj番目の画素が0かを判定
//       if (data.at(i).at(j) == 0) {
//         count++;
//       }

//     }
//   }

  cout << count << endl;

}

/*
【宣言】
2次元配列の宣言は次の形式になります。

```
vector<vector<要素の型>> 変数名(要素数1, vector<要素の型>(要素数2, 初期値));
vector<vector<要素の型>> 変数名(要素数1, vector<要素の型>(要素数2));  // 初期値を省略
```

初期値は省略することができます。省略した場合は「要素の型」に対応するゼロ値で初期化されます。
例えば要素の型がintなら、初期値は0で、stringなら空文字列("")です。

表のようなデータを扱う場合、一般的には次のようにします。

```
vector<vector<要素の型>> 変数名(縦の要素数, vector<要素の型>(横の要素数));
```

例題で扱ったデータは、

・要素が整数
・縦に3行
・横に4列

の表であるため、次のように宣言しています。

```
vector<vector<int>> data(3, vector<int>(4));
```


【アクセス】
2次元配列の要素にアクセスする場合は次のように書きます。

```
変数名.at(添字1).at(添字2)
```
宣言時にvector<vector<要素の型>> 変数名(縦の要素数, vector<型>(横の要素数))としている場合、より具体的には次のようになります。


```
変数名.at(上から何番目か).at(左から何番目か)
```
例題では、入力の部分で「上からi番目、左からj番目」の要素に入力するため、


```
cin >> data.at(i).at(j)
```
と書いています。
また、上からi番目、左からj番目のマスが0かどうかを判定するため、

```
if (data.at(i).at(j) == 0)
```
と書いています。

【大きさの取得】
```
vector<vector<int>> data(3, vector<int>(4));

data.size();  // 3 (縦の要素数) (12ではないことに注意!)
data.at(0).size();  // 4 (横の要素数)
```


縦の要素数を取得するには変数名.size()として、横の要素数を取得するには変数名.at(0).size()とします。

変数名.size()とした時に、すべての要素の個数ではなく縦の要素数が返ってくることに注意してください。
すべての要素数が必要なときは縦の要素数 * 横の要素数で求める必要があります。

*/

#pragma endregion


/*
【N×0の二次元配列】

後から配列に要素を追加して使う場合などに、N×0の配列を宣言することがあります。
以下のように書くと、N×0の二次元配列になります。

```
vector<vector<型>> 変数名(N);  // 「要素数0の配列」の配列
```

外側のvectorの初期値を省略することで、N個の配列の要素数はそれぞれ0になります。
*/

/*
【長方形にならない二次元配列(ジャグ配列)】
N×0の二次元配列に後から要素を追加していく場合などに「行毎に要素数の違う二次元配列」ができることがあります。
このような配列はジャグ配列と呼ばれることがあります。

具体例
以下のdataはジャグ配列の例です。

```
vector<vector<int>> data(3);  // 3×0の配列

data.at(0).push_back(1);
data.at(0).push_back(2);
data.at(0).push_back(3);
// data.at(0)は3要素の配列

data.at(1).push_back(4);
data.at(1).push_back(5);
data.at(1).push_back(6);
data.at(1).push_back(7);
// data.at(1)は4要素の配列

data.at(2).push_back(8);
data.at(2).push_back(9);
// data.at(2)は2要素の配列
```

【dataのイメージ】
1 2 3
4 5 6 7
8 9
*/

#pragma region 多次元配列
/*
【多次元配列】

2次元配列をさらに拡張して、3次元配列や4次元配列といったより高次元の配列を作ることもできます。
1次元より次元の大きい配列をまとめて多次元配列と呼びます。

3次元配列を使った例を見てみましょう。

例題
まるばつゲームの状態が
N個与えられます。マルは'o'、バツは'x'、空白は'-'で表されます。すべての状態の'o'の個数の和を求めてください。

「1つ目の状態」
- - -
- x -
- o -

「2つ目の状態」
x o -
- o -
x - -

【入力】
2
- - -
- x -
- o -

x o -
- o -
x - -

【出力】
3

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  // N × (3 × 3)要素の配列を宣言
  vector<vector<vector<char>>> data(N, vector<vector<char>>(3, vector<char>(3)));

  // 入力
  for (int i = 0; i < N; i++) {
    // i番目の状態を読む
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        cin >> data.at(i).at(j).at(k);
      }
    }
  }

  // 'o'の数を数える
  int count = 0;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {

        // 「i番目の状態」「上からj番目」「左からk番目」の要素が'o'か判定
        if (data.at(i).at(j).at(k) == 'o') {
          count++;
        }

      }
    }
  }

  cout << count << endl;
}


#pragma endregion

#pragma region 注意点

/*
【注意点】
多次元配列を扱う際の基本的な注意点は1次元配列と同様です。

多次元配列ではさらに、添字の順番に注意しましょう。
また、変数名.size()では1次元目の要素数が取得できますが、すべての要素の個数が取得できる訳ではないという点に注意しましょう。

```
vector<vector<vector<int>>> data = {
  {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
  },
  {
    {13, 14, 15, 16},
    {17, 18, 19, 20},
    {21, 22, 23, 24},
  },
};

int size1 = data.size();
cout << size1 << endl;  // 2

int size2 = data.at(0).size();
cout << size2 << endl;  // 3

int size3 = data.at(0).at(0).size();
cout << size3 << endl;  // 4

cout << size1 * size2 * size3 << endl;  // 24
```

*/

#pragma endregion