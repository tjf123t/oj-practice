// 题目：洛谷 B2118 验证子串
// 思路：双向验证，s2 是否在 s1 中，或 s1 是否在 s2 中
// 复杂度：O(n*m)，字符串长度不超过 30

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin >> s1 >> s2;

    if (s1.find(s2) != string::npos) {
        cout << s2 << " is substring of " << s1 << '\n';
    } else if (s2.find(s1) != string::npos) {
        cout << s1 << " is substring of " << s2 << '\n';
    } else {
        cout << "No substring" << '\n';
    }

    return 0;
}
