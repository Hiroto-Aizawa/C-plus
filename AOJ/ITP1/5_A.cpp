// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/5

// 【Print a Rectangle】
/*
長方形の描画

たてH cm よこ W cm の長方形を描くプログラムを作成して下さい。
1 cm × 1cm の長方形を '#'で表します。
*/

#include <iostream>
using namespace std;

int main() {
    int h, w;
    
    while(true) {
        cin >> h >> w;
        
        if(h == 0 && w == 0) break;
        
        for(int i=0; i < h; i++) {
            for(int j=0; j < w; j++) {
                cout << '#';
            }
            cout << endl;
        }
        cout << endl;
    }
}