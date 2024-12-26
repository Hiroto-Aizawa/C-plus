// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/5/ITP1_5_B

// 【Print a Frame】
/*
フレームの描画

以下のような、たてH cm よこ W cm の枠を描くプログラムを作成して下さい。

##########
#........#
#........#
#........#
#........#
##########

上図は、たて 6 cm よこ 10 cm の枠を表しています。
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
                if(i == 0 || i == h-1 || j == 0 || j == w-1) {
                    cout << '#';
                    continue;
                }
                cout << '.';
            }
            cout << endl;
        }
        cout << endl;
    }
}