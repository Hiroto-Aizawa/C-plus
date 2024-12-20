// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/1/ITP1_1_D

//　【Watch】

#include <iostream>
using namespace std;

int main(){
    int s, m, h;
    cin >> s;
    
    h = s / 3600;
    m = (s % 3600) / 60;
    s = s % 60;
    cout << h << ':' << m << ':' << s << endl;
}