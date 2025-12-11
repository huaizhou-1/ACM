#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    int l, r;
    cin >> l >> r;
    int cnt = 0;
    for (int i = l; i <= r && i <= 20; i++) {
        ll tmp = i * i;
        ll ans = 0;
        while (tmp > 0) {
            ans += tmp % 10;
            tmp /= 10;
        }
        if (ans == i) {
            // cout << i << " ";
            cnt++;
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