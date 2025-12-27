#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
	int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        mp[a]++;
    }
    ll a = 0;
    ll b = 0;
    for (auto [x, y]: mp) {
        if (x % 2 == 1) {
            a += y;
        }
        if (x % 2 == 0) {
            b += y;
        }
    }
    cout << min(a, b);
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