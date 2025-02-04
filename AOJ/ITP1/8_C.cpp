#include <bits/stdc++.h>
//-------------------------------------------
// #include <iostream>
// #include <vector>
// #include <algorythm>
//#include <ctype.h>
using namespace std;

/*エイリアス*/
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;

/* マクロ */
// 関数
#define rep(i, a, n) for (int i=a; i < n; i++)
#define REP(i, a, n) for (int i=a; i <= n; i++)
// 出力系
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

// intから桁和を求める関数
int digit_sum(int n) {
    int sum = 0;

    while(n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// stringから桁和を求める関数
int digit_sum(string s) {
    int sum = 0;
    
    for(char c : s) {
      //intへキャスト
      sum += c - '0';
    }
    return sum;
}

/*
///////////////////////////////////////////
/////////////////// MAIN //////////////////
///////////////////////////////////////////
*/

int main() {
    map<char, int> count;
    string s;
    
    while(getline(cin, s) ){
      for(char c : s) {
        // アルファベットをカウント
        if(isalpha(c)) {
          // 小文字に変換してカウント
          count[tolower(c)]++;
        }
      }
    }
    
    // アルファベットA~Zまで出力するループ  
    for(char c='a'; c <= 'z'; ++c) {
      cout << c << " : " << count[c] << endl;
    }
    
    return 0;
}