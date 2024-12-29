// https://atcoder.jp/contests/abc386/tasks/abc386_c

// 【Operate 1】

/*
【問題文】
この問題は F 問題 (Operate K) の部分問題であり、 K=1 です。
F 問題に正解するコードをこの問題に提出することで、この問題に正解できます。

文字列 S に対して以下の操作を 0 回以上 K 回以下行って、
文字列 T と一致させられるか判定してください。

次の 3 種類の操作のうちひとつを選択し、実行する。
・S 中の (先頭や末尾を含む) 任意の位置に、任意の文字を 1 つ挿入する。
・S 中の文字を 1 つ選び、削除する。
・S 中の文字を 1 つ選び、別の 1 つの文字に変更する。

【制約】
・S,T は英小文字からなる長さ 1 以上 500000 以下の文字列
・K=1

【入力】
入力は以下の形式で標準入力から与えられる。

K
S
T

【出力】
K 回以下の操作で 
S を 
T に一致させられる時 Yes 、そうでない時 No と出力せよ。
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, count, sSize, tSize;
    string s, t;
    cin >> k >> s >> t;
    count = 0;
    sSize = s.size();
    tSize = t.size();
    if(sSize == tSize){
        for(int i=0; i < sSize; i++) {
        if(s[i] != t[i]) count++;
        }

      //差分が1以下なら変更で一致させられる
        if(count <= 1) cout << "Yes";
        else cout << "No";

        return 0;
    } 
    
    // 文字列の長さが2以上差がある場合は1度の操作で一致させることは不可能
    if(abs(sSize - tSize) >+ 2 ) {
        cout << "No";
    }
    
    if(sSize < tSize) {
        for(char c : t) {
        //t-1まで一致する文字列であればYes
        if(s.find(c) != string::npos) {
            count++;
        }
        }
        if(count == ( tSize - 1) ) {
        cout << "Yes";
        return 0;
        }
    } else if(tSize < sSize) {
        for(char c : s) {
        //s-1まで一致する文字列であればYes
        if(t.find(c) != string::npos) {
            count++;
        }
        }
        if(count == ( sSize - 1) ) {
        cout << "Yes";
        return 0;
        } 
    } 
    
    cout << "No";
}

#pragma region 公式解説

#include<bits/stdc++.h>

using namespace std;

int main(){
    int k;
    string s,t;
    cin >> k >> s >> t;
    if(s==t){
        cout << "Yes\n";
        return 0;
    }

    int sl=s.size();
    int tl=t.size();

    if(sl==tl){
      // modify
        int c=0;
        for(int i=0;i<sl;i++){
        if(s[i]!=t[i]){c++;}
        }
        if(c<=1){cout << "Yes\n";}
        else{cout << "No\n";}
    }
    else if(sl+1==tl){
      // insert
        int pc=0,sc=0;
        while(pc<sl){
        if(s[pc]==t[pc]){pc++;}
        else{break;}
        }
        while(sc<sl){
        if(s[sl-1-sc]==t[tl-1-sc]){sc++;}
        else{break;}
        }
        if(pc+sc>=sl){cout << "Yes\n";}
        else{cout << "No\n";}
    }
    else if(sl-1==tl){
      // erase
        swap(s,t);
        swap(sl,tl);
        int pc=0,sc=0;
        while(pc<sl){
        if(s[pc]==t[pc]){pc++;}
        else{break;}
        }
        while(sc<sl){
        if(s[sl-1-sc]==t[tl-1-sc]){sc++;}
        else{break;}
        }
        if(pc+sc>=sl){cout << "Yes\n";}
        else{cout << "No\n";}
    }
    else{
        cout << "No\n";
    }
    return 0;
}


#pragma endregion