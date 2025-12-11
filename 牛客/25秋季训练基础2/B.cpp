#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1e5 + 9;
const ll mod = 1e9 + 7;

void solve() {
    ll n = 0;
    cin >> n;
    string s = "";
    cin >> s;
    ll a = 0;
    ll b = 0;
    for (ll i = 0; i < n; i++) {
        if (s[i] == '6') {
            a++;
        }
        if (s[i] == '1') {
            b++;
        }
    }
    int ans = 0;
    if (a == 2 && b == 1) {
        cout << 1;
        return;
    }
    ans = 1;
    a -= 2;
    b -= 1;
    ans += min(a, b);
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