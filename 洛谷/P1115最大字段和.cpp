#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
	int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    vector<ll> ans(n);
    ll mx = LONG_LONG_MIN;
    for (int i = 1; i <= n; i++) {
        ans[i] = max(ans[i - 1] + arr[i], arr[i]);
        mx = max(mx, ans[i]);
    }
    cout << mx;
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