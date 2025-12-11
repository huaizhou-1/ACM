#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    ll n = 0;
    cin >> n;
    ll ans = 1;
    ll a = 2;
    ll b = 1;
    ll tmp = 0;
    for (int i = 0; i < n; i++) {
        ans = a + b;
        tmp = a;
        a = a + b;
        b = tmp;
    }
    cout << ans << '\n';
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