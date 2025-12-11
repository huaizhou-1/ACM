// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// const int N = 1e5 + 9;
// const int mod = 1e9 + 7;

// void solve() {
//     int n = 0;
//     int q = 0;
//     cin >> n >> q;
//     string s = "";
//     cin >> s;
//     int arr[q];
//     for (int i = 0; i < q; i++) {
//         cin >> arr[i];
//         // cout << arr[i];
//     }
//     int i = 0;
//     while (q--) {
//         int num = arr[i];
//         int j = 0;
//         int ans = 0;
//         while (num > 0) {
//             if (s[j] == 'A') {
//                 num -= 1;
//             }
//             if (s[j] == 'B') {
//                 num /= 2;
//             }
//             ans++;
//             j++;
//             if (j == n) {
//                 j = 0;
//             }
//             cout << num << " ";
//         }
//         cout << endl;
//         // cout << ans << endl;
//         i++;
//     }
//     // cout << endl;
//     return;
// }

// int main()
// {
// 	ios::sync_with_stdio(0);
// 	cin.tie(0);
// 	int _ = 1;
// 	cin >> _;
//     // cout << _;
// 	while (_--) {
// 		solve();
// 	}
// 	return 0;
// }
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> a(q);
    for (int i = 0; i < q; ++i) {
        cin >> a[i];
    }
    for (int num : a) {
        int x = num;
        int ans = 0;
        int j = 0; // 当前机器的索引（0-based）
        while (x > 0) {
            // 尝试计算一轮（n次操作）后的结果x1和机器索引j1
            int x1 = x;
            int j1 = j;
            bool can_batch = true;
            for (int i = 0; i < n; ++i) {
                if (s[j1] == 'A') {
                    x1--;
                } else {
                    x1 /= 2;
                }
                if (x1 == 0) {
                    can_batch = false;
                    break;
                }
                j1 = (j1 + 1) % n;
            }
            if (can_batch && x1 < x) {
                // 批量处理一轮，时间加n，更新x和j
                ans += n;
                x = x1;
                j = j1;
            } else {
                // 逐个处理剩余步骤
                while (x > 0) {
                    if (s[j] == 'A') {
                        x--;
                    } else {
                        x /= 2;
                    }
                    ans++;
                    j = (j + 1) % n;
                }
            }
        }
        cout << ans << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}