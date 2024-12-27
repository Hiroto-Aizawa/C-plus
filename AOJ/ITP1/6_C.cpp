// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_C

// 【Official House】
/*
公舎の入居者数

Ａ大学は１フロア１０部屋、３階建ての公舎４棟を管理しています。
公舎の入居・退去の情報を読み込み、各部屋の入居者数を出力するプログラムを作成して下さい。
n件の情報が与えられます。各情報では、４つの整数b, f, r, vが与えられます。
これは、b棟f階のr番目の部屋にv人が追加で入居したことを示します。
vが負の値の場合、-v人退去したことを示します。
最初、全ての部屋には誰も入居していないものとします。
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    //  棟 階 番 人
    int b, f, r, v;
    int house[4][3][10];
    
    fill(&house[0][0][0], &house[0][0][0] + 4 * 3 * 10, 0);
    
    for(int i=0; i < n; i++) {
      cin >> b >> f >> r >> v;
      //配列は0か始まるので-1して位置を合わせる
      house[b-1][f-1][r-1] += v;
    }
    
    
    for(int i=0; i < 4; i++) {
        for(int j=0; j < 3; j++) {
            for(int k=0; k <10; k++) {
                if(k == 10) cout << " " << house[i][j][k] << endl;
                else cout << " " << house[i][j][k];
            }
            cout << endl;
        }
        if(i != 3) cout << "####################" << endl;
    }
}