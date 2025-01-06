//

// 【9x9 Sum】
/*

*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int x;
  cin >> x;
  int sum = 0;
  int grid[9][9];
  //fill(&grid[0][0], &grid[0][0] + 9 * 9, 0);
  
  for(int i=0; i < 9; i++){
    for(int j=0; j < 9; j++){
      //配列は0番目から始まるのでn+1して九九に対応させる
      grid[i][j] = (i+1) * (j+1);
      if(grid[i][j] != x) sum += grid[i][j];
    }
  }
  
  cout << sum << endl;
}