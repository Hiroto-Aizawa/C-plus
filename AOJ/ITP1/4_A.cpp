// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/4/ITP1_4_A

// 【A/B Problem】
/*
割り算

２つの整数 a と b を読み込んで、以下の値を計算するプログラムを作成して下さい：
・a ÷ b ： d (整数)
・a ÷ b の余り ： r (整数)
・a ÷ b ： f (浮動小数点数)
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int d, r;
    double f;
    d = a / b;
    r = a % b;
    f = (double)a / b;
    
    //double型の値を出力する際に出力する小数点以下の桁数を指定するには以下のようにする
    cout << fixed << setprecision(5);
    cout << d << " " << r << " " << f << endl;
}