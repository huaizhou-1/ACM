#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll cnt = 0;
    int j = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0' && i > j) {
            cnt++;
        }
        if (s[i] == '1') {
            j = i + k;
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