// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/4/ITP1_4_D

// 【Min, Max and Sum】
/*
最小値、最大値、合計値

n個の整数 ai(i=1,2,...n)を入力し、それらの最小値、最大値、合計値を求めるプログラムを作成してください。
*/

#include <iostream>
using namespace std;

int main() {
    int n, a;
    //最初の入力で必ず代入が行われるように初期化
    int64_t max = -1000000;
    int64_t min = 1000000;
    
    long long sum = 0;
    cin >> n;
    
    for(int i=0; i < n; i++){
        cin >> a;
        
        if(a > max) max = a;
        
        if(a < min) min = a;
        
        sum += a;
    }
    
    cout << min << " " << max << " " << sum << endl;
}