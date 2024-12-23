// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/2/ITP1_2_C

// 【Sorting Three Numbers】

#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  if (a > b) {
    //一時変数
    int tmp = a;
    a = b;
    b = tmp;
  }
  if (b > c) {
    int tmp = b;
    b = c;
    c = tmp;
  }
  if (a > b) {
    int tmp = a;
    a = b;
    b = tmp;
  }

  cout << a << " " << b << " " << c << endl;
}