// https://atcoder.jp/contests/apg4b/tasks/APG4b_ce

// 【ゲーム大会 】

#pragma region 提出版

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    
    for (int i = 0; i < M; i++) {
        cin >> A[i] >> B[i];
    }

    // ここにプログラムを追記
    // (ここで"試合結果の表"の2次元配列を宣言)
    // N×Nのchar型の2次元配列のすべての要素を'-'で初期化
    vector<vector<char>> table(N, vector<char>(N, '-'));

    for (int i = 0; i < M; i++) {
        // 1〜N → 0〜N-1 に変換
        A[i]--;
        B[i]--;
        table[A[i]][B[i]] = 'o';  // AはBに勝った
        table[B[i]][A[i]] = 'x';  // BはAに負けた
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << table[i][j];
            if (j == N - 1) {
                cout << endl;  // 行末なら改行
            }
            else {
                cout << " ";  // 行末でないなら空白を出力
            }
        }
    }
}


#pragma endregion