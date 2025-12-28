#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 5;
const int mod = 1e9 + 7;
int a[N], b[N], c[N], d[N];
void solve() {
	int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x, y;
        cin >> a[i] >> b[i] >> x >> y;
        c[i] = a[i] + x;
        d[i] = b[i] + y;
    }
    int x, y;
    cin >> x >> y;
    for (int i = 1; i <= n; i++) {
        if (x >= a[i] && y >= b[i] && x <= c[i] && y <= d[i]) {
            cout << i;
            return;
        }
    }
    cout << -1;
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