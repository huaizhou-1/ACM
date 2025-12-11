#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
	int n;
	cin >> n;
	vector<int> arr(2 * n);

	map<int, int> mp;
	ll cnta = 0;
	ll cntb = 0;
	ll cntc = 0;
	for (int i = 0; i < 2 * n; i++) {
		cin >> arr[i];
		mp[arr[i]]++;
	}
	for (auto [x, y]: mp) {
		if (y % 2 == 1) {
			cnta++;
		}
		else if (y % 4 == 0) {
			cntb++;
		}
		else if (y % 2 == 0 && y % 4 != 0) {
			cntc++;
		}
	}
	ll ans = cnta + 2 * cntc + 2 * cntb;
	if (cntb % 2 == 1 && cnta <= 0) {
		ans -= 2;
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