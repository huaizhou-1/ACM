#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    string a;
    string b;
    cin >> a >> b;
    int m = a[a.size() - 1] - '0';
    int n = b[b.size() - 1] - '0';
    // cout << m << " " << n;
    int ans = (m + n) % 10;
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