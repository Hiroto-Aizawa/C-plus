// https://atcoder.jp/contests/apg4b/tasks/APG4b_cl

// 【電卓をつくろう2】


#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A;
    cin >> N >> A;

    for (int i = 1; i <= N; i++) {
        int B;
        string op;
        cin >> op >> B;

        if (op == "+") {
            A += B;
        }
        else if (op == "-") {
            A -= B;
        }
        else if (op == "*") {
        A *= B;
        }
        else if (op == "/" && B != 0) {
            A /= B;
        }
        else {
            cout << "error" << endl;
            break;
        }

        cout << i << ":" << A << endl;
    }

}
