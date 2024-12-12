// https://atcoder.jp/contests/apg4b/tasks/APG4b_s

// 【多重ループ】

#pragma region 多重ループ

// 二重ループ
int main() {

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
        cout << "i:" << i << ", j:" << j << endl;
        /*
        【出力結果】
        i:0, j:0
        i:0, j:1
        i:0, j:2
        i:1, j:0
        i:1, j:1
        i:1, j:2
        i:2, j:0
        i:2, j:1
        i:2, j:2
        */
    }
  }
}


// 三重ループ
#include <bits/stdc++.h>
using namespace std;

int main() {

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << "i:" << i << ", j:" << j << ", k:" << k << endl;
                /*
                【出力結果】
                i:0, j:0, k:0
                i:0, j:0, k:1
                i:0, j:1, k:0
                i:0, j:1, k:1
                i:1, j:0, k:0
                i:1, j:0, k:1
                i:1, j:1, k:0
                i:1, j:1, k:1
                */
            }
        }
    }
}

#pragma endregion

#pragma region 例題
/*
例題
「3要素の2つの配列A, Bに同じ要素が含まれているかどうか判定する」

次のプログラムをベースに説明していきます。
今回は「存在するかどうか」のYES/NOを判定する問題なので、答えはbool型の変数に入れます。
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> A(3), B(3);
  for (int i = 0; i < 3; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < 3; i++) {
    cin >> B.at(i);
  }

  // 答えを保持する変数
  bool answer = false;

  // ここにプログラムを追記
  for(int i=0; i < A.size(); i++){
    for(int j=0; j < B.size(); j++){
        if(A[i] == B[j]) answer = true;
    }
  }

  if (answer) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
}


#pragma endregion

#pragma region 多重ループのbreak/continue

// フラグを使用する場合
#include <bits/stdc++.h>
using namespace std;

int main(){
    bool finished = false;  // 外側のループを抜ける条件を満たしているかどうか(フラグ変数)

    for (int i = 0; i < ... ; i++) {
        for (int j = 0; j < ... ; j++) {
            /* 処理 */
            if (/* 2重ループを抜ける条件 */) {
                finished = true;
                break;  // (＊)
                // finishをtrueにしてからbreakすることで、
                //   内側のループを抜けたすぐ後に外側のループも抜けることができる
            }
        }   

        // (＊)のbreakでここに来る
        if (finished) {
            break;  // (＊＊)
        }
    }
    // (＊＊)のbreakでここに来る
}



// 関数を使用する場合
#include <bits/stdc++.h>
using namespace std;

void func( /* 処理に必要な変数 */ ) {
  for (int i = 0; i < ... ; i++) {
    for (int j = 0; j < ... ; j++) {

      /* 処理 */

      if (/* 2重ループを抜ける条件 */) {
        return;  // 関数のreturnはループに関係なく抜けることができる
      }
    }
  }
}

int main() {
  func();
}

#pragma endregion