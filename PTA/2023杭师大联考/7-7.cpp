#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    int m = 0;
    cin >> n >> m;
    int time[m];
    int ans = 0;
    for (int i = 0; i < m; i++) {
        cin >> time[i];
    }
    sort(time, time + m);
    for (int i = 0; n - m < 2 || n - m <= 0; i++) {
        ans = max(time[i], ans);
        m--;
    }
    cout << ans + 20;
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