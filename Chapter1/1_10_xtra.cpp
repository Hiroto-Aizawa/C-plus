// https://atcoder.jp/contests/apg4b/tasks/APG4b_cm


#pragma region  提出版

#include "bits/stdc++.h"
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int i = 0;
    // ここにプログラムを追記
    cout << "A:";

    while(i < A){
        cout << "]";
        i++;
    }
    cout << endl;

    i=0;

    cout << "B:";
    while(i < B){
        cout << "]";
        i++;
    }
    cout << endl;
}

#pragma endregion



#pragma region 解答例

#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int i = 0;
    cout << "A:";
    //入力された値が0の場合の条件式は、
    //
    while (i < A) {
        cout << "]";
        i++;
    }
    cout << endl;

    i = 0;
    cout << "B:";
    while (i < B) {
        cout << "]";
        i++;
    }
    cout << endl;
}


#pragma endregion
