// https://atcoder.jp/contests/abc087/tasks/abc087_b

// 【】
/*
【問題文】
あなたは、
500 円玉を 
A 枚、
100 円玉を 
B 枚、
50 円玉を 
C 枚持っています。 これらの硬貨の中から何枚かを選び、合計金額をちょうど 
X 円にする方法は何通りありますか。

同じ種類の硬貨どうしは区別できません。2 通りの硬貨の選び方は、ある種類の硬貨についてその硬貨を選ぶ枚数が異なるとき区別されます。

【制約】
・0 ≤ A, B, C ≤ 50
・A + B + C ≥ 1
・50 ≤ X ≤ 20, 000
・A, B, C は整数である
・X は 50 の倍数である
*/

#include <iostream>
using namespace std;

int main() {
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  int cnt = 0, sum = 0;
  
  for(int i=0; i <= a; i++){
    for(int j=0; j <= b; j++){
      for(int k=0; k <= c; k++){
        sum = (i * 500) + (j * 100) + (k * 50);
        if(x == sum) cnt++;
      }
    }
  }
  cout << cnt << endl;
}