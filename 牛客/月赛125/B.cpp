#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
	int n, q;
    cin >> n >> q;
    vector<int> a(n + 5);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    while (q--) {
        int k, x;
        cin >> k >> x;
        int num = upper_bound(a.begin() + 1, a.begin() + 1 + n, x) - a.begin();
        num--;
        cout << num << "\n";
        cout << (k >= num ? "Yes" : "No") << "\n";
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