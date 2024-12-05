// https://atcoder.jp/contests/abc382/tasks/abc382_a

/*
問題文
N 個の箱が横一列に並んでおり、そのうちのいくつかの箱にはクッキーが入っています。

各箱の状態は長さ N の文字列 S によって表されます。 
具体的には、左から i (1≤i≤N) 番目の箱は、S の i 文字目が @ のときクッキーが 1 枚入っており、. のとき空き箱です。

高橋君は今からの D 日間、一日一回ずつ、これらの箱のいずれかに入ったクッキーを 1 枚選んで食べます。

N 個の箱のうち、D 日間が経過した後に空き箱であるものはいくつあるか求めてください。
 （この値は高橋君が各日でどのクッキーを選ぶかによらないことが証明できます。）

なお、S には @ が D 個以上含まれることが保証されます。
*/

#pragma region 提出版

#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int n, d, a = 0;
  string s;
 
  cin >> n >> d >> s;

  // 範囲ベースfor文
  // https://learn.microsoft.com/ja-jp/cpp/cpp/range-based-for-statement-cpp?view=msvc-170
  for(char c : s){
    if(c == '@' ) a++;
  }
   
  //N箱 - クッキーA個 + 食べるD個
  cout << n - a + d << endl;
}

#pragma endregion

//----------------------------------------------

#pragma region 解説動画の解

#include <bits/stdc++.h>
using namespace std;
//for文のマクロ
#define rep(i, n) for(int i=0; i < (n); i++)
 
int main() {
 
  int n, d;
  string s;
  cin >> n >> d >> s;
  int box = 0;
  
  rep(i, n){
    if(s[i] == '.' ) box++;
  }
  //空き箱の数は、
  //既に空箱の数(box) + これから食べる数(d) で求められる
  int ans = box + d;
  cout << ans << endl;
}

#pragma endregion