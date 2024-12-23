// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/2/ITP1_2_A

// 【Small, Large, or Equal】
/*
大小関係

２つの整数 a, b を読み込んで、a と b の大小関係を出力するプログラムを作成して下さい。
*/
#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    
    if(a < b) cout << "a < b" << endl;
    if(a > b) cout << "a > b" << endl;
    if(a == b) cout << "a == b" << endl;
}