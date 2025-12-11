#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e3;
const int mod = 1e9 + 7;
void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    x = abs(x);
    y = abs(y);
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '8') {
            cnt++;
        }
    }
    ll b = n - cnt;
    ll need = max((x - cnt), 0ll) + max((y - cnt), 0ll);
    if (need <= b) {
        cout << "yes\n";
    }
    else {
        cout << "no\n";
    }
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

