#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    ll k = 0;
    cin >> n >> k;
    map<ll, ll> mp;
    ll sum = 0;
    mp[0] = 1;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        int t = 0;
        cin >> t;
        sum += t;
        ans += mp[sum - k];
        mp[sum]++;
    }
    cout << ans << '\n';
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