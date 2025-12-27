#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
void solve() {
	int n, k;
    cin >> n >> k;
    map<int, int> mp;
    int mx = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        mp[a]++;
        mx= max(mx, mp[a]);
    }
    if (mx >= k) {
        cout << "0";
        return;
    }
    for (auto [x, y]: mp) {
        cout << y << " ";
    }
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