#include<bits/stdc++.h>
using namespace std;
#define int long long
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
	int q;
    cin >> q;
    while(q--) {
        ll n, m;
        cin >> n >> m;
        if (n < m) {
            cout << "0\n";
            continue;
        }
        ll ans = 0;
        ll tmp = 0;
        for (ll i = 1; i < 11; i++) {
            if ((i * m) % 10 == 0) {
                tmp = i;
                break;
            }
        }
        ll yicixunhuanhe = tmp * m;
        if (n < yicixunhuanhe) {
            for (ll i = m; i <= n; i += m) {
                string s = to_string(i);
                ans += s[s.size() - 1] - '0';
            }
            cout << ans << '\n';
            continue;
        }
        else {
            ll t = 0;
            for (ll i = m; i <= yicixunhuanhe; i += m) {
                string s = to_string(i);
                t += s[s.size() - 1] - '0';
            }
            ans += n / yicixunhuanhe * t;
            for (ll i = n / yicixunhuanhe * yicixunhuanhe; i <= n; i += m) {
                string s = to_string(i);
                ans += s[s.size() - 1] - '0';
            }
            cout << ans << '\n';
        }
    }
}

signed main()
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