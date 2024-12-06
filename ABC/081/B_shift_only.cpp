// https://atcoder.jp/contests/abs/tasks/abc081_b
// 【全探索問題】

/*
問題文
黒板に N 個の正の整数 A1,...,ANが書かれています．
すぬけ君は，黒板に書かれている整数がすべて偶数であるとき，次の操作を行うことができます．

黒板に書かれている整数すべてを，2 で割ったものに置き換える．
すぬけ君は最大で何回操作を行うことができるかを求めてください．

制約
1≤N≤200
1≤A 
i ≤10 9

*/

#pragma region 解答
// https://qiita.com/drken/items/fd4e5e3630d0f5859067#%E7%AC%AC-3-%E5%95%8F--abc-081-b---shift-only-200-%E7%82%B9

#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int n, ans = 0;
  int a[201];
  cin >> n;
  //Aの値をN回forでループさせて入力する
  for(int i=0; i < n; i++) cin >> a[i];
 
 //ループの回数が定まっていないのでwhileで回す
 while(true){
   bool isOdd = false;
   
   for(int i=0; i < n; i++){
     //配列aの各要素が偶数であるかを確認する
     if(a[i] % 2 != 0){
       //偶数じゃないならループ処理を終了するフラグを立てる
       isOdd = true;
     }
   }
   
   //whileループから抜ける
   if(isOdd) break;
   
   for(int i=0; i < n; i++){
    //偶数であることが確定しているので、2で割った値を代入する
     a[i] /= 2;
   }
   
   ans++;
 }
 
 cout << ans << endl;
}

#pragma endregion