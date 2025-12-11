#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    cin >> n;
    ll x[n];
    ll y[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
        // cout << x[i] << " " << y[i] << endl;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int k = i + 1; k < n; k++) { 
            for (int h = k + 1; h < n; h++) {
                if((x[k] - x[i]) * (y[h] - y[i]) == (x[h] - x[i]) * (y[k] - y[i])) continue;
                ll a = ((x[i] - x[k]) * (x[i] - x[k])) + ((y[i] - y[k]) * (y[i] - y[k]));
                ll b = ((x[i] - x[h]) * (x[i] - x[h])) + ((y[i] - y[h]) * (y[i] - y[h]));
                ll c = ((x[h] - x[k]) * (x[h] - x[k])) + ((y[h] - y[k]) * (y[h] - y[k]));
                ll mx = max({a, b, c});
                ll mn = min({a, b, c});
                // cout << mx << " " << mn << " " << a + b + c - mx - mn << endl;
                if (mn + (a + b + c - mx - mn) < mx) {
                    ans++;
                }
            }
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