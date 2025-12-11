#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
char arr[55][55];
void solve() {
	int m = 0;
	int n = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
		}
	}
	ll dp[55][55];
	dp[1][1] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (arr[i][j - 1] == 'R' || arr[i][j - 1] == 'B') {
				dp[i][j] += dp[i][j - 1] % mod;
			} 
			if (arr[i - 1][j] == 'D' || arr[i - 1][j] == 'B') {
				dp[i][j] += dp[i - 1][j] % mod;
			} 
		}
	}
	cout << dp[n][m] % mod;
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