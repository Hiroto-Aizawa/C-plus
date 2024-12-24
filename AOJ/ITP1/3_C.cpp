// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/3

// 【Swappint Two Numbers】
/*
2 つの数の交換

２つの整数 x, y を読み込み、それらを値が小さい順に出力するプログラムを作成して下さい。
ただし、この問題は以下に示すようにいくつかのデータセットが与えられることに注意して下さい。
*/

#include <iostream>
using namespace std;

int main() {
    int x, y;
    
    while(true){
        cin >> x >> y;
        if(x == 0 && y == 0) break;
        
        if(x > y) cout << y << " " << x << endl;
        else cout << x << " " << y << endl;
    }
}