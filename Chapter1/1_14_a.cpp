// https://atcoder.jp/contests/apg4b/tasks/APG4b_o

// 【STLの関数 STL(Standard Template Library)】



//max() : 最大値を求める関数

#include <bits/stdc++.h>
using namespace std;

int main() {
    //比較する型は一致させる
    int answer = min(10, 5);

    cout << answer << endl; // 5
}


//min() : 最小値を求める関数
#include <bits/stdc++.h>
using namespace std;

int main() {
    //比較する型は一致させる
    int answer = max(10, 5);

    cout << answer << endl; // 10
}

//swap : 値を交換する関数

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10, b = 5;
    
    //同じ型である必要がある
    swap(a, b);

    cout << a << endl; // 5
    cout << b << endl; // 10
}

//reverse() : 配列の要素を逆順にする関数

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {1, 5, 3};
    reverse(vec.begin(), vec.end()); // {3, 5, 1}

    for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << endl;
    }
}

//sort() : 配列の順番を昇順に入れ替える関数

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {2, 5, 2, 1};
    sort(vec.begin(), vec.end()); // {1, 2, 2, 5}

    for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << endl;
    }
}
