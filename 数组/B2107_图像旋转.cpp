// 题目：洛谷 B2107 图像旋转
// 思路：原矩阵 m 行 n 列；顺时针旋转 90 度后，b[j][m-1-i] = a[i][j]。
// 复杂度：O(m*n)

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 105;
int a[MAXN][MAXN];
int b[MAXN][MAXN];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            b[j][m - 1 - i] = a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (j) {
                cout << ' ';
            }
            cout << b[i][j];
        }
        cout << '\n';
    }

    return 0;
}
