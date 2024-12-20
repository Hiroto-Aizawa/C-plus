// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/2/ITP1_2_A

// 【Small, Large, or Equal】

#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    
    if(a < b) cout << "a < b" << endl;
    if(a > b) cout << "a > b" << endl;
    if(a == b) cout << "a == b" << endl;
}