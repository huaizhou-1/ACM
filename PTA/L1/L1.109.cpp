#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
int vis[26];
int cnt[26];
void solve() {
	string s;
    cin >> s;
    ll ans = 0;
    for (auto &x: vis) {
        cin >> x;
    }
    for (int i = 0; i < s.size(); i++) {
        int t = s[i] - 'a';
        cnt[t]++;
        ans += vis[t];
    }
    for (int i = 0; auto &x: cnt) {
        cout << x << " \n"[++i == 27];
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