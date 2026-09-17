// 题目：洛谷 B2101 计算矩阵边缘元素之和
// 思路：遍历矩阵，只累加第一行、最后一行、第一列或最后一列的元素。
// 复杂度：O(m*n)

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;

    vector<vector<int>> a(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    long long sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                sum += a[i][j];
            }
        }
    }

    cout << sum << '\n';
    return 0;
}
