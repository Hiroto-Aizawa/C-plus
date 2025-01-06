//

// 【Happy New Year 2025】
/*
【問題文】
正整数 A,B が与えられます。
A+B の二乗を出力してください。

【制約】
・1 ≤ A, B ≤ 2025
・入力は全て整数

【入力】
入力は以下の形式で標準入力から与えられる。
A B

【出力】
答えを出力せよ。
*/

#include <iostream>
using namespace std;

int main() {
  int a,b;
  cin >> a >> b;
  
  int sum = a + b;
  cout << sum * sum << endl;
}