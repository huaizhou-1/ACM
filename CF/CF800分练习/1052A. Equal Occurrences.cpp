#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
	int n  = 0;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	map<int, int> cs;
	for(int i: arr) {
		cs[i]++;
	}
	int maxcs = 0;
	for(auto &i: cs) {
		maxcs = max(maxcs, i.second);
	}
    int ans = 0;
	for(int i = 1; i <= maxcs; i++) {
		int count = 0;
		for(auto &k: cs) {
			if(k.second >= i) {
				count++;
			}
		}
		ans = max(ans, count * i);
	}
	cout << ans << endl;
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
