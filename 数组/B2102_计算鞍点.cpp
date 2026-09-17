// 题目：洛谷 B2102 计算鞍点
// 思路：枚举每个元素，检查它是否为所在行最大值、所在列最小值。
// 复杂度：O(N^3)，本题 N 固定为 5。

#include <bits/stdc++.h>
using namespace std;

const int N = 5;
int a[N][N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> a[i][j];
        }
    }

    bool found = false;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            bool row_max = true;
            for (int k = 0; k < N; k++) {
                if (a[i][j] < a[i][k]) {
                    row_max = false;
                    break;
                }
            }

            bool col_min = true;
            for (int k = 0; k < N; k++) {
                if (a[i][j] > a[k][j]) {
                    col_min = false;
                    break;
                }
            }

            if (row_max && col_min) {
                cout << i + 1 << ' ' << j + 1 << ' ' << a[i][j] << '\n';
                found = true;
            }
        }
    }

    if (!found) {
        cout << "not found\n";
    }

    return 0;
}
