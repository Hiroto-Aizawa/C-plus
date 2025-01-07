//

/*
【問題文】
1 以上 N 以下の整数のうち、10 進法での各桁の和が A 以上 B 以下であるものの総和を求めてください。

【制約】
・1 ≤ N ≤ 10^4
・1 ≤ A ≤ B ≤ 36
・入力はすべて整数である
*/
#include <iostream>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int ans = 0;
  
  for(int i=1; i <= n; i++){
    int sum = 0, x = i;
    //Nの最大値が10000なので最大5桁分のループで判定する
    for(int j=0; j < 5; j++){
      sum += x % 10;
      x /= 10;
    }
    
    if(a <= sum && sum <= b) {
      ans += i;
    }
  }
  cout << ans << endl;
}
