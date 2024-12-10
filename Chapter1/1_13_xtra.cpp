// https://atcoder.jp/contests/apg4b/tasks/APG4b_cj

// 【平均との差 】

#pragma region 提出版
#include "bits/stdc++.h"
using namespace std;

int main() {
    int N, ans, sum, avg = 0;
    cin >> N;

    vector<int> A(N); // N個の点数データ

    // 数学の点数データを受け取る
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    // 合計点を出力
    for (int i = 0; i < N; i++) {
        sum += A[i];
    }

    avg = sum / N;

    for (int i = 0; i < N; i++) {
        ans = avg - A[i];
        cout << abs(ans) << endl;
    }
}

#pragma endregion


#pragma region 解答例

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    // N要素の配列
    vector<int> A(N);

    // 入力処理
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    // 合計点
    int sum = 0;

    // 合計点を計算
    for (int i = 0; i < N; i++) {

      // ①ここにプログラムを追記
        sum += A.at(i);

    }

    // 平均点
    int mean = sum / N;

    // 平均点から何点離れているかを計算して出力
    for (int i = 0; i < N; i++) {

      // ②ここにプログラムを追記
      // 負の数を出力しないように注意
        if (A.at(i) > mean) {
        cout << A.at(i) - mean << endl;
        }
        else {
        cout << mean - A.at(i) << endl;
        }

    }

}

#pragma endregion