#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
	double n, y, r;
	cin >> n >> y >> r;
	int ans = r;
	ans += floor(y / 2);
	cout << min(ans, (int)n) << '\n';
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