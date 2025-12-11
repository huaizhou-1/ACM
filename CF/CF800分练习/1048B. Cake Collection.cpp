#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int arr[N];
void solve() {
    int n = 0;
	int m = 0;
	cin >> n >> m;
	ll ans = 1;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	int second = 1;
	for (int i = n; second <= m; second++) {
		ans += second * arr[i];
		i++;
		if (i > n) {
			i = 1;
		}
	}
	
	cout << ans << endl;
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