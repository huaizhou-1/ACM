#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
int arr[N];
void solve() {
    int n = 0;
    cin >> n;
    // cout << 1;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        // cout << arr[i];
    }
    int sum[n + 1] = {0, 0};
    for (int i = 1; i <= n; i++) {
        sum[i] = arr[i] + sum[i - 1];
    }
    // for (auto i: sum) {
    //     cout << i << " ";
    // }
    int m = 0;
    cin >> m;
    while (m--) {
        int l, r;
        cin >> l >> r;
        cout << sum[r] - sum[l - 1] << '\n';
    }
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int _ = 1;
	// cin >> _;
	while (_--) {
		solve();
	}
	return 0;
}