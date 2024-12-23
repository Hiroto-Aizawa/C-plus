// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/3

// 【Print Test Case】
/*
オンラインジャッジでは、提出されたプログラムが複数の入力データそれぞれに対して正しい出力を行っているかを判定するために、
１つの入力データファイルに複数のデータセットが含まれているものがあります。
この問題は、そのようなデータセットを処理するための練習問題です。

１つの整数 x を読み込み、それをそのまま出力するプログラムを作成して下さい。

ただし、この問題は以下に示すようにいくつかのデータセットが与えられることに注意して下さい。
*/
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    
    while(true){
        int num;
        cin >> num;
        
        if(num == 0) break;
        
        cout << "Case " << i << ": " << num << endl;
        i++;
    }
}