//https://atcoder.jp/contests/abc082/tasks/abc082_a

/*
問題文
2 つの正整数a, bが与えられます。 
a, bの平均値を xとします。 
x の小数点以下を切り上げて得られる整数を出力してください。

制約
a, bは整数である。
1 ≤ a,b ≤ 100

入力
1 3
出力
2

入力
7 4
出力
6
*/

#pragma region 提出版
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    if( (a + b) % 2 == 0) cout << (a + b ) / 2;
    //切り捨てられ多分を+1して補正する
    else cout << (a + b) /2 + 1;
}

#pragma endregion

#pragma region 解答

#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
    //切り捨てられる分を+1で補正する
    //a + bの計が偶数の場合はn.5となり切り捨てられる
	cout << (a + b + 1) / 2 << endl;
}

#pragma endregion