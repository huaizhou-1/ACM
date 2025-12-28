#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6 + 9;
const int mod = 1e9 + 7;
int arr[N];
long long ans = 0;
void find(int n, int x) {
	int l = 0;
	int r = n - 1;
	int i = 0;
	int j = 0;
	while (l < r) {
		int mid = l + (r - l) / 2;
		if (arr[mid] >= x) r = mid;
		else l = mid + 1;
	}
	if (arr[l] == x) {
		i = l;
	}
	else {
		return;
	}
	l = 0;
	r = n - 1;
	while (l < r) {
		int mid = l + (r - l + 1) / 2 ;
		if (arr[mid] <= x) l = mid;
		else r = mid - 1;
	}
	if (arr[l] == x) {
		j = l;
	}
	ans += j - i + 1;
}

void solve() {
   int n = 0;
   int c = 0;
   cin >> n >> c;
   for (int i = 0; i < n; i++) {
		cin >> arr[i];
   } 
   sort(arr, arr + n);
   for (int i = 0; i < n; i++) {
		int x = arr[i] - c;
		find(n, x);
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