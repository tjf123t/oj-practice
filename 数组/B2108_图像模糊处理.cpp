// 题目：洛谷 B2108 图像模糊处理
// 思路：先用 b 保存原矩阵；边缘像素保持不变，内部像素取自身和上下左右共 5 格的平均值，
//       四舍五入使用 (sum + 2) / 5。
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
            b[i][j] = a[i][j];
        }
    }

    // 只处理不靠边的内部像素；边缘像素继续保留 b 中复制过来的原值。
    for (int i = 1; i < m - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            int sum = a[i][j]
                    + a[i - 1][j]
                    + a[i + 1][j]
                    + a[i][j - 1]
                    + a[i][j + 1];

            // 5 个数的平均值为 sum / 5，加 2 可实现普通非负数的四舍五入。
            b[i][j] = (sum + 2) / 5;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (j) {
                cout << ' ';
            }
            cout << b[i][j];
        }
        cout << '\n';
    }

    return 0;
}
