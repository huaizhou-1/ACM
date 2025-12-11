#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e8 + 7;
const int mod = 1e9 + 7;
int arr[N];
ll sum = 0;
int n = 0;
int k = 0;
bool check(int mid) {
	if (mid == 0) {
		return true;
	}
	ll sum = 0;
	for (int i = 0; i < n; i++) {
		if(arr[i] >= mid) {
			sum += arr[i] / mid;
		}
	}
	if (sum >= k) return true;
	else return false;
}

void solve() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int l = 0;
	int r = 1e8 + 5;
	while (l <= r) {
		int m = l + (r - l) / 2;
		if (check(m)) l = m + 1; 
		else r = m - 1;
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