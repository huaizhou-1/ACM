#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    ll n, a, b;
    cin >> n >> a >> b;
    ll arr[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    ll ans = 0;
    arr[0] = 0;
    for (int i = 0; i < n; i++) {
        if ((arr[i + 1] - arr[i]) * a >= b) {
            ans += b;
        }
        else {
            ans += (arr[i + 1] - arr[i]) * a;
        }
    }
    cout << ans;
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