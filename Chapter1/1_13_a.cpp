// https://atcoder.jp/contests/apg4b/tasks/APG4b_n

// 【配列】


#pragma region 配列の宣言と入力

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> vec(N);

    for (int i = 0; i < N; i++) {
        cin >> vec[i];
    }

    for (int i = 0; i < N; i++) {
        cout << vec[i];
    }

#pragma endregion