#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
	int n, x;
    cin >> n >> x;
    ll cnt = 0;
    for (int i = 1; i < 800; i++) {
        for (int j = 1; j < 800; j++) {
            for (int k = 1; k < 800; k++) {
                if ((i * j + i * k + j * k <= n) && i + j + k <= x) {
                    // cout << i << " " << j << " " << k << '\n';
                    cnt++;
                }
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