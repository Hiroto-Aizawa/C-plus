// https://atcoder.jp/contests/apg4b/tasks/APG4b_cq

// 【電卓をつくろう】

/*
問題文
1行の計算式が与えられるので、その結果を出力してください。

与えられる計算式のパターンと対応する出力は以下の表の通りです。

入力
入力は次の形式で標準入力から与えられます。
A op B

出力
入力の計算式の計算結果を出力してください。 出力の最後には改行が必要です。

入力例
1 + 2
出力例
3

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    string op;

    cin >> a >> op >> b;

    if( op == "+") cout << a + b << endl;
    elif(op == "-") cout << a - b << endl;
    elif(op == "*") cout << a * b << endl;
    elif(op == "/" && b != 0){ cout << a / b << endl;
    }
    else cout << "error" << endl;
}