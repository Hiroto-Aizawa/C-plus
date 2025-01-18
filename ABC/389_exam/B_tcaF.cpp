#include <bits/stdc++.h>
//-------------------------------------------
// #include <vector>
// #include <algorythm>
using namespace std;

/* マクロ */
// 関数
#define rep(i, a, n) for (int i=a; i < n; i++)
#define REP(i, a, n) for (int i=a; i <= n; i++)
// 出力系
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

// 桁和を求める関数
int digit_sum(int n) {
    int sum = 0;

    while(n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

#pragma region main

int main() {
    // int n;
    // cin >> n;
    
    // string s;
    // cin >> s;
    
    // vector<int> a(n);
    // rep(i, 0, n) cin >> a[i];
    
    long long x;
    cin >> x;
    
    long long a = 1;
    int n = 1;

    while (a < x) {
        n++;
        a *= n;
    }
    
    if (a == x) {
        cout << n << endl;
    }
    return 0;
}

#pragma endregion