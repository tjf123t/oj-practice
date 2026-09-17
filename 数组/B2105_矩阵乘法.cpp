// 题目：洛谷 B2105 矩阵乘法
// 思路：A(n*m) * B(m*k) = C(n*k)，逐格计算行与列的点积。
// 复杂度：O(n*m*k)

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 105;
int a[MAXN][MAXN];
int b[MAXN][MAXN];
long long c[MAXN][MAXN];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            for (int t = 0; t < m; t++) {
                c[i][j] += 1LL * a[i][t] * b[t][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (j) {
                cout << ' ';
            }
            cout << c[i][j];
        }
        cout << '\n';
    }

    return 0;
}
