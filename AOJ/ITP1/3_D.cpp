// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/3/ITP1_3_D

// 【How Many Divisions?】
/*
約数の数

３つの整数 a、b、c を読み込み、a から b までの整数の中に、
c の約数がいくつあるかを求めるプログラムを作成してください。
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int ans = 0;
    cin >> a >> b >> c;
    
    for(int i=a; i <= b; i++){
        if(c % i == 0) ans++;
    }
    cout << ans << endl;
}