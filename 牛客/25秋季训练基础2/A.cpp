#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1e5 + 9;
const ll mod = 1e9 + 7;

void solve() {
    ll a = 0;
    ll b = 0;
    ll c = 0;
    ll x = 0;
    ll y = 0;
    ll z = 0;
    cin >> a >> b >> c >> x >> y >> z;
    ll ans = 0;
    ans += min(a, y);
    ans += min(b, z);
    ans += min(c, x);
    cout << ans;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll _ = 1;
	// cin >> _;
	while (_--) {
		solve();
	}
	return 0;
}