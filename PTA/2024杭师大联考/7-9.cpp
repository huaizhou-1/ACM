#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    cin >> a >> b >> c >> d;
    if (b > d) {
        cout << - 1;
        return;
    }
    int ans = 0;
    ans += d - b;
    a += d - b;
    if (a < c || (a - c) % 2 != 0) {
        cout << - 1;
        return;
    }
    else {
        ans += (a - c) / 2;
    }
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