// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/5/ITP1_5_D

// 【Structured Programming】
/*
構造化プログラミング

goto 文は、C/C++言語などで使うことのできる文で、実行されると無条件に指定されたラベルに処理が飛びます。
例えば goto CHECK_NUM; という文が実行されると、プログラムの中で CHECK_NUM: 
と書かれた行に処理が移ります。この機能を使って、繰り返し処理なども実現することができます。

一方、goto 文は自由度が高すぎ、プログラムの可読性に影響するため、可能な限り使わないことが推奨されています。

次のC++言語のプログラムと同じ動作をするプログラムを作成してください。
ただし、goto 文は使わないで実装してみましょう。

void call(int n){
  int i = 1;
 CHECK_NUM:
  int x = i;
  if ( x % 3 == 0 ){
    cout << " " << i;
    goto END_CHECK_NUM;
  }
 INCLUDE3:
  if ( x % 10 == 3 ){
    cout << " " << i;
    goto END_CHECK_NUM;
  }
  x /= 10;
  if ( x ) goto INCLUDE3;
 END_CHECK_NUM:
  if ( ++i <= n ) goto CHECK_NUM;

  cout << endl;
}
*/

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  for(int i = 1; i <= n; i++) {
    int x = i;
      
    if(x % 3 == 0){
      cout << " " << i;
      continue;
    }
      
    while(x) {
      if(x % 10 == 3) {
        cout << " " << i;
        // whileのループを抜ける
        break;
      }
      x /= 10;
    }
  }
  cout << endl;
}