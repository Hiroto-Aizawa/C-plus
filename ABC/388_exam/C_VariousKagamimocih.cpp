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
    // TLE（制限時間超過）
}

#pragma region 公式解答
// 解説動画
// https://www.youtube.com/watch?v=UWoRBhN2s6Y&t=1825s

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for(int i=0; i < n; i++) cin >> a[i];

    long long ans = 0;
    for(int b=0; b < n; b++) {
        // 二分探索
        // あるindexからa <= b / 2の条件から外れるので、
        // その外れる地点を二分探索で探し出す。

        // upper_bound(開始位置, 終了位置, 検索したい値)
        int r = upper_bound(a.begin(), a.begin() + b, a[b] / 2) - a.begin();
        ans += r;
    }
    cout << ans << endl;
}
#pragma endregion