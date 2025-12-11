#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
int L = 0;
int n = 0;
int m = 0;
int arr[N];
bool check (int mid) {
	ll cnt = 0;
	ll tmp = 0;
	arr[n] = L;
	for (int i = 0; i <= n; i++) {
			if (arr[i] - tmp < mid) {
				cnt++;
				continue;
			}
			tmp = arr[i];
	}
	if (cnt <= m) {return true;}
	else {return false;}
}
void solve() {
	cin >> L >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int l = 0;
	int r = 1e9 + 10;
	while (l <= r) {
		ll mid = l + (r - l) / 2;
		if (check(mid)) {l = mid + 1;}
		else {r = mid - 1;}
	}
	cout << r;
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