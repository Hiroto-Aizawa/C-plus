// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/1/ITP1_1_C

// 【Rectangle】

#include <iostream>
using namespace std;

int main(){
    int a, b, ans1, ans2;
    cin >> a >> b;
    
    ans1 = a * b;
    ans2 = (a + b) * 2;
    cout << ans1 << ' ' << ans2 << endl;
}