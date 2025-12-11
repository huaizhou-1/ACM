#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n, m;
    int ans = 0;
    cin >> n >> m;
    while (n--) {
        int p, q, w;
        cin >> p >> q >> w;
        int needs = (((m * q) * p) + (q * q) - 1) / (q * q);
        // cout << needs << "\n";
        if (needs > w) {
            ans += needs - w;
        }
    }
    cout << ans;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int _ = 1;
	// cin >> n;
    // cin >> m;
	while (_--) {
		solve();
	}
    // cout << ans;
	return 0;
}