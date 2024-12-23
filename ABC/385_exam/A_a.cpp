// https://atcoder.jp/contests/abc385/tasks/abc385_a

// 【Equally】

/*
【問題文】
3 つの整数 A,B,C が与えられます。
これら 3 つの整数を 2 つ以上のグループに分けて、
それぞれのグループ内の数の和を等しくできるかどうか判定してください。

【制約】
・1 ≤ A, B, C ≤ 1000
・入力はすべて整数

【入力】
入力は以下の形式で標準入力から与えられる。
A B C

【出力】
A,B,C を和の等しい 2 つ以上のグループに分けることができるならば
Yes を、できないならば No を出力せよ。
*/

#pragma region 提出版

#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    
    if( (a == b && a == c) || a + b == c || a + c == b || b + c == a) cout << "Yes" << endl;
    else cout << "No" << endl;
}

#pragma endregion