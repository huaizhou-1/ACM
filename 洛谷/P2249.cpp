#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6 + 9;
const int mod = 1e9 + 7;
int arr[N];
int x[N];
int check (int mid, int x) {
    if (arr[mid] >= x) return 1;
    else return 0;
}
int sqrtfind(int l, int r, int x) {
    while (l < r)
    {
        int mid = l + (r - l ) / 2;
        if (check(mid, x)) r = mid;    // check()判断mid是否满足性质
        else l = mid + 1;
    }
    if (arr[l] == x) return l;
    else return -1;
}
void solve() {
    int n = 0;
	int m = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i <= m; i++) {
		cin >> x[i];
	}
	for (int i = 1; i <= m; i++) {
		int a = sqrtfind(1, n, x[i]);
        cout << a << " ";
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