// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/2/ITP1_2_D

// 【Circle in a Rectangle】
/*
長方形の中に円が含まれるかを判定するプログラムを作成してください。
次のように、長方形は左下の頂点を原点とし、右上の頂点の座標 (W,H) が与えられます。
また、円はその中心の座標 (x,y) と半径 r で与えられます。

*/

#include <iostream>
using namespace std;

int main() {
    int w, h, x, y, r;
    cin >> w >> h >> x >> y >> r;
    // x座標がwの範囲内にあるか　　　　y座標がhの範囲内にあるか
    if(0 <= (x - r) && (x + r) <= w && 0 <= (y - r) && (y + r) <= h) {
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
    
}