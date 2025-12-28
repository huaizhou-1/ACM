#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
	int n, m;
    string s1, s2;
    cin >> n >> m >> s1 >> s2;
    ll ans = 1000;
    for (int i = 0; i <= n - m; i++) {
        ll cnt = 0;
        bool flag = 1;
        for (int j = 0; j < m; j++) {
            int a = s1[i + j] - '0';
            int b = s2[j] - '0';
            // cout << a << " " << b << '\n';
            if (s2[j] != s1[i + j]) {
                flag = 0;
                if (b < a) {
                    cnt += a - b;
                    // cout << cnt << ' ';
                }
                if (b > a) {
                    cnt += (a + 1) + 10 - b - 1;
                    // cout << cnt << '\n';
                }
            }
        }
        if (flag == 1) {
            cout << 0;
            return;
        }
        ans = min(ans, cnt);
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