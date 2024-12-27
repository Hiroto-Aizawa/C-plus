// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_A

// 【Matrix Vector Multiplication】
/*
ベクトルと行列の積

n×m の行列 A と、m×1 の列ベクトルb を読み込み、A と b の積を出力するプログラムを作成してください。
次のように m 個の数を縦に並べたものを m×1の列ベクトルと呼びます。

    ⎛ b1 ⎞
    ⎜ b2 ⎟
b = ⎜  : ⎟
    ⎜  : ⎟
    ⎝ bm ⎠

次のように n 個の数を含む列ベクトルを m 個横に並べたものを n×m の行列と呼びます。

    ⎛ a11 a12 ... a1m ⎞
    ⎜ a21 a22 ... a2m ⎟
A = ⎜  :   :   :   :  ⎟
    ⎜  :   :   :   :  ⎟
    ⎝ an1 an2 ... anm ⎠

ベクトルまたは行列の中に含まれる数のことを要素と呼び、
m×1 の列ベクトル b の上から i 番目の要素は 
bi(i=1,2,...,m)、n×m の行列 A には n×m 個の要素が含まれ、
i 行 j 列目の要素は aij(i=1,2,...,n,j=1,2,...,m)で示されます。
n×mの行列 A とm×1の列ベクトル b の積は、n×1の列ベクトル c となり、
c の i 番目の要素 ci は次の式で得られます：

ci = m∑j=1 aij_bj = ai1_b1 + ai2_b2 + ... + aim_bm

*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,m, ans;
    cin >> n >> m;
    
    int aij, bi;
    // n行 x m列の行列
    // int a[n][m];
    // int b[n];
    int ans[n];
    
    for(int i=0; i < n; i++) {
        for(int j=0; j < m; j++) {
            cin >> aij;
            //a[i][j] = aij;
            //cout << aij << " ";
            if(aij != 0) ans[i] += aij;
        }
        cout << ans[i] << endl;
        //cout << endl;
    }
    
    // for(int i=0; i < n; i++) {
    //     cin >> bi;
    //     //b[i] = bi;
    //     ans[i] += bi;
    //     cout << ans[i] << endl;
    // }
}