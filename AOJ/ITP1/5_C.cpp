// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/5

// 【Print a Chessboard】
/*
チェスボードの描画

以下のような、たてH cm よこ W cm のチェック柄の長方形を描くプログラムを作成して下さい。

#.#.#.#.#.
.#.#.#.#.#
#.#.#.#.#.
.#.#.#.#.#
#.#.#.#.#.
.#.#.#.#.#
上図は、たて 6 cm よこ 10 cm の長方形を表しています。

長方形の左上が "#" となるように描いて下さい。
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
                //hが偶数行の場合
                if(i % 2 == 0) {
                    //wが偶数列の場合
                    if(j % 2 == 0) {
                        cout << '#';
                    } else {
                        cout << '.';
                    }
                } else {
                    if(j % 2 == 0) {
                        cout << '.';
                    } else {
                        cout << '#';
                    }
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}