// https://atcoder.jp/contests/abc386/tasks/abc386_a

// 【Full House 2】

/*
【問題文】
4 枚のカードがあり、それぞれのカードには整数 A,B,C,D が書かれています。
ここに s1 枚カードを加え、フルハウスとできるか判定してください。

ただし、 5 枚組のカードは以下の条件を満たすとき、
またそのときに限って、フルハウスであると呼ばれます。

異なる整数 x,y について、 x が書かれたカード 3 枚と y が書かれたカード 2 枚からなる。

【制約】
入力は全て整数
1 ≤ A, B, C, D ≤ 13

【入力】
入力は以下の形式で標準入力から与えられる。
A B C D

【出力】
1 枚カードを加えてフルハウスとできる場合は Yes 、そうでないときは No と出力せよ。
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(a == b && a == c && a== d){
        cout << "No";
        return 0;
    } 
    
    if(a == b && c == d) {
        cout << "Yes";
        return 0;
    }
    if(a == c && b == d) {
        cout << "Yes";
        return 0;
    }
    if(a == d && b == c) {
        cout << "Yes";
        return 0;
    }
    
    if(a == b && a == c) {
        cout << "Yes";
        return 0;
    }
    if(b == c && b == d) {
        cout << "Yes";
        return 0;
    }
    if(a == c && a == d) {
        cout << "Yes";
        return 0;
    }
    if(b == c && b == d) {
        cout << "Yes";
        return 0;
    }
    if(a == b && a == d) {
        cout << "Yes";
        return 0;
    }
    cout << " No";
}