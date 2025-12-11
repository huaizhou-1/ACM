#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    int m = 0;
    cin >> n >> m;
    string s1;
    string s2;
    cin >> s1 >> s2;
    int ans = 0;
    for (int i = 0; i < min(n, m); i++) {
        if (s1[i] != s2[i]) {
            ans++;
        }
    }
    ans += max(n, m) - min(n, m);
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