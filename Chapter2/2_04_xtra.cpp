// https://atcoder.jp/contests/apg4b/tasks/APG4b_cd

// 【九九の採点】

/*
【問題文】
小学校の先生であるあなたはA君に九九の表を埋める宿題を出しました。 次の日、A君は宿題をやってきましたが、いくつかのマスは間違っているようです。

A君の宿題を採点するプログラムを作成してください。

具体的には、以下の要件を満たすプログラムを作成してください。

A君の回答の表(9×9の二次元配列)を入力として受け取る
誤った値が書き込まれたマスを正しい値に書き直す
正しい値が書き込まれたマスの個数を数える
誤った値が書き込まれたマスの個数を数える
※参照渡しの練習問題なので、「プログラムの雛形」を書き換える形でプログラムを作成してください。
*/

#pragma region 提出版

#include "bits/stdc++.h"
using namespace std;

// 参照渡しを用いて、呼び出し側の変数の値を変更する
void saiten(vector<vector<int>> &vec, int &correctCnt, int &wrongCnt) {
  // 呼び出し側のAの各マスを正しい値に修正する
  // Aのうち、正しい値の書かれたマスの個数を correct_count に入れる
  // Aのうち、誤った値の書かれたマスの個数を wrong_count に入れる
  int ans=0;

  // ここにプログラムを追記
  for (int i = 0; i < sizeof(vec); i++) {
    for (int j = 0; j < sizeof(vec[i]); j++) {
      ans = (i+1) * (j+1);

      if(vec[i][j] != ans){
        vec[i][j] = (i+1) * (j+1);
        wrongCnt++;

      } else {
        correctCnt++;
      }
    }
  }
}


// -------------------
// ここから先は変更しない
// -------------------
int main() {
  // A君の回答を受け取る
  vector<vector<int>> A(9, vector<int>(9));
  for (int i = 0; i < vec.size(); i++) {
    for (int j = 0; j < vec[i].size(); j++) {
      cin >> A.at(i).at(j);
    }
  }

  int correct_count = 0; // ここに正しい値のマスの個数を入れる
  int wrong_count = 0;   // ここに誤った値のマスの個数を入れる

  // A, correct_count, wrong_countを参照渡し
  saiten(A, correct_count, wrong_count);

  // 正しく修正した表を出力
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cout << A.at(i).at(j);
      if (j < 8) cout << " ";
      else cout << endl;
    }
  }
  // 正しいマスの個数を出力
  cout << correct_count << endl;
  // 誤っているマスの個数を出力
  cout << wrong_count << endl;
}

#pragma endregion