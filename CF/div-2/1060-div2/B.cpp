#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    cin >> n;
    int arr[n + 1];
    arr[n + 1] = 0;
    int mx = 0;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        // cout << arr[i] << " ";
    }
    // cout << endl;
    for (int i = 1; i <= n; i++) {
        mx = max(mx, arr[i]);
        // cout << arr[i] << " ";
        if (i % 2 == 0) {
            // cout << mx << " ";
            arr[i] = mx;
            // cout << arr[i] << " ";
            if (arr[i - 1] >= arr[i]) {
                ans += arr[i - 1] - arr[i] + 1;
                mx = max(mx, arr[i - 1]);
                arr[i - 1] = arr[i] - 1;
            }
            if (arr[i + 1] >= arr[i]) {
                ans += arr[i + 1] - arr[i] + 1;
                mx = max(mx, arr[i + 1]);
                arr[i + 1] = arr[i] - 1;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int _ = 1;
	cin >> _;
	while (_--) {
		solve();
	}
	return 0;
}