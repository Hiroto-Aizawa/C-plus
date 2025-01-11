// https://atcoder.jp/contests/abc388/tasks/abc388_c

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int cnt = 0;
    cin >> n;
    int a[n];
    
    for(int i=0; i < n; i++) cin >> a[i];
    
    sort(a, a+n, greater<int>());
    
    for(int i=0; i < n; i++) {
        for(int j=1; j <n; j++) {
            if(a[j] <= a[i] / 2 ){
            cnt++;
            } 
        }
    }
    
    cout << cnt << endl;
}