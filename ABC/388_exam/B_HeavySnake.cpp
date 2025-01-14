// https://atcoder.jp/contests/abc388/tasks/abc388_b

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d;
    cin >> n >> d;
    int t[n], l[n];
    
    for(int i=0; i < n; i++) {
        in >> t[i] >> l[i];
    }
    
    
    for(int i=1; i <= d; i++) {
        int max = 0;

        for(int j=0; j < n; j++) {
            int ans = t[j] * (l[j] + i);
            if(max < ans) max = ans;
        } 
        cout << max << endl;
    }
}