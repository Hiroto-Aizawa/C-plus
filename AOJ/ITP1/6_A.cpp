// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_A

// 【Reversing Numbers】
/*
数列の反転

与えられた数列を逆順に出力するプログラムを作成して下さい。
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,tmp =0;
    cin >> n;
    vector<int> a(100);
    
    for(int i=0; i < n; i++) cin >> a[i];
    
    //逆順のロープを回す
    for(int i=n-1; 0 <= i; i--) {
      if(i == 0) cout << a[i];
      else cout << a[i] << " ";
    }
}

//////////////////////////////////////////////////////

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,tmp =0;
    cin >> n;
    vector<int> a(n);
    
    for(int i=0; i < n; i++) cin >> a[i];
    
    reverse(a.begin(), a.end());
    
    for(int i=0; i < n; i++) {
      if(i == n-1) cout << a[i] << endl;
      else cout << a[i] << " ";
    }
}