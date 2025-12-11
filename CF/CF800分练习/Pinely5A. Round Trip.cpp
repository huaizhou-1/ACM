#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
void solve() {
	int R0, x, D, n;
	cin >> R0 >> x >> D >> n;
	string s;
	cin >> s;
	ll cnt = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {
			R0 -= D;
			if (R0 < 0) {
				R0 = 0;
			}
			cnt++;
		}
		if (s[i] == '2') {
			if (R0 < x) {
				cnt++;
			}
		}
	}
	cout << cnt << '\n';
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