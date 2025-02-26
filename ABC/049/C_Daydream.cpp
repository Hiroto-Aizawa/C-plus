// https://atcoder.jp/contests/abc049/tasks/arc065_a

/*
【問題文】
英小文字からなる文字列 S が与えられます。 
Tが空文字列である状態から始め、以下の操作を好きな回数繰り返すことで 
S=T とすることができるか判定してください。

・T の末尾に dream dreamer erase eraser のいずれかを追加する。

【制約】
・1 ≦ ∣ S ∣ ≦ 10^5
・S は英小文字からなる。

【入力】
入力は以下の形式で標準入力から与えられる。

S

【出力】
S=T とすることができる場合 YES を、そうでない場合 NO を出力せよ。
*/


#pragma region 回答

#include <bits/stdc++.h>
//-------------------------------------------
#include <cmath>
// #include <iostream>
// #include <vector>
// #include <algorythm>
using namespace std;

/*エイリアス*/
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<long long>;
using vvl = vector<vl>;
using vs = vector<string>;
using vvs = vector<vs>;
// pair
using psi = pair<string, int>;
using pii = pair<int, int>;
// tuple
using tsii = tuple<string, int, int>;
using tiii = tuple<int, int, int>;

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

// stringから桁和を求める関数
int digit_sum(string s) {
    int sum = 0;
    
    for(char c : s) {
        //intへキャスト
        sum += c - '0';
    }
    return sum;
}

// 文字列サイズの比較関数
bool compare(string & s1, string& s2) {
    return s1.size() < s2.size();
}

/*
///////////////////////////////////////////
/////////////////// MAIN //////////////////
///////////////////////////////////////////
*/

int main() {
    vector<string> keywords = {"dream", "dreamer", "erase", "eraser"};
    
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    
    rep(i, 0, keywords.size()) 
      reverse(keywords[i].begin(), keywords[i].end());
    
    bool isDevide = true;
    bool isWordsMatch = false;
    rep(i, 0, s.size()) {
      rep(j, 0, keywords.size()) {
        string words = keywords[j];
        // sをwordsで分割できるか
        if(s.substr(i, words.size()) == words) {
          //cout << "substr: " << s.substr(i, words.size()) << "|| words: " << words <<endl;
          isWordsMatch = true;
          i += words.size();
        }
      }
      
      if(!isWordsMatch) {
        isDevide = false;
        break;
      }
    }
    
    if(isDevide) YES;
    else NO;
}

#pragma endregion

#pragma region 解答(動的計画法(DP))
/*
このC++コードは、文字列 `S` が、与えられた単語のリスト `{"dream", "dreamer", "erase", "eraser"}` を使って分割できるかどうかを判定するものです。出力として "YES" または "NO" を表示します。

### 1. 問題の要点
`S` の文字列が、リストに含まれる単語のいずれかを使って正確に分割できる場合、出力として "YES" を返します。もしできない場合は "NO" となります。

### 2. `dp` 配列の意味
- `dp[i]` は、`S[0...i-1]` がリストの単語で分割できるかどうかを示すブール値です。
- 初期状態で、`dp[0] = true` としています。これは、空の文字列 `S[0...0]` は当然分割できるという意味です。

### 3. コードの流れ
- `S` という文字列を1文字ずつ見ていき、部分文字列 `S[i...j]` が、リストの単語と一致すれば、その後の位置に進めるように `dp` 配列を更新します。
- `dp[i]` が `true` の場合、その位置で単語のリストのいずれかの単語が一致するかを調べ、一致すれば `dp[i + s.size()]` を `true` にします。これにより、その位置まで到達できる場合に次の位置も到達できるようにします。

### 4. `S = "erasedream"` の場合の流れ
このコードが "YES" を出力する理由を説明します。

1. 初期状態で、`dp[0] = true` です。
2. `i = 0` のとき、`dp[0]` が `true` なので、次に進みます。
    - `S[0...4]` = `"erase"` がリストの `"erase"` と一致するので、`dp[5] = true` に更新されます。
3. `i = 5` のとき、`dp[5]` が `true` なので、次に進みます。
    - `S[5...9]` = `"dream"` がリストの `"dream"` と一致するので、`dp[10] = true` に更新されます。
4. `i = 10` のとき、`dp[10]` が `true` なので、終了します。
5. 最後に、`dp[S.size()] = dp[10]` が `true` なので、"YES" が出力されます。

### 5. 結論
- `S = "erasedream"` は、`"erase"` と `"dream"` に分割できるため、出力は "YES" になります。
*/
#include <iostream>
#include <string>
using namespace std;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};
bool dp[100010];

int main() {
    string S;
    cin >> S;

    dp[0] = true;
    for(int i = 0; i < S.size(); ++i){
        // 最初に切れるかを確認する -> 無理なら破綻しているのでずっとcontinue
        if(!dp[i])continue; // そこまでで矛盾があったらとりあえず無視

        for(string words : divide){
            if(S.substr(i, words.size()) == s){ // うまく切れたら先に進む
                dp[i + words.size()] = true;
            }
        }
    }
    cout << (dp[S.size()] ? "YES" : "NO") << endl;
    return 0;
}

#pragma endregion