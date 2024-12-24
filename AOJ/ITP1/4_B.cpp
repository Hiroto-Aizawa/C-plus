// 

// 【Circle】
/*
円の面積と円周

半径 r の円の面積と円周の長さを求めるプログラムを作成して下さい。
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double r;
  cin >> r;

  const double PI = 3.141592653589;
  double ans1 = r * r * PI;
  double ans2 = r * 2 * PI;

  cout << fixed << setprecision(5);
  cout << ans1 << " " << ans2 << endl;
}