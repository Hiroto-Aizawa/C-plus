// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6

// 【Finding Missing Cards】
/*
不足しているカードの発見

太郎が花子と一緒にトランプ遊びをしようとしたところ、52枚あるはずのカードが n 枚のカードしか手元にありません。
これらの n 枚のカードを入力として、足りないカードを出力するプログラムを作成して下さい。
太郎が最初に持っていたトランプはジョーカーを除く52枚のカードです。
52枚のカードは、スペード、ハート、クラブ、ダイヤの４つの絵柄に分かれており、各絵柄には13のランクがあります。
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num;
    char c;
    
    //列が絵柄、行が数字を記録する
    int trump[4][13];
    //配列の要素を全て0で初期化する
    fill(&trump[0][0], &trump[0][0] + 4 * 13, 0);
    
    for(int i=0; i < n; i++) {
        cin >> c >> num;
        
        //配列は0番目から始まるので、0スタートに合わせるための「num-1」
        if(c == 'S') trump[0][num-1] = num;
        if(c == 'H') trump[1][num-1] = num;
        if(c == 'C') trump[2][num-1] = num;
        if(c == 'D') trump[3][num-1] = num;
    }
    
    for(int i=0; i < 4; i++) {
        for(int j=0; j < 13; j++){
            //配列は0番目から始まるのでカードの数値-1ずれているのでj+1で元に戻す
            if(i == 0 && trump[i][j] == 0) cout << 'S' << " " << j+1 << endl;
            if(i == 1 && trump[i][j] == 0) cout << 'H' << " " << j+1 << endl;
            if(i == 2 && trump[i][j] == 0) cout << 'C' << " " << j+1 << endl;
            if(i == 3 && trump[i][j] == 0) cout << 'D' << " " << j+1 << endl;
        } 
    }
}