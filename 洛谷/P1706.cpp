#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
bool st[N];
int arr[N];
int n = 0;
void dfs (int u) {
    if (u == n) {
		for (int i = 0; i < n; i++) {
			printf("%5d", arr[i]);
		}
		// cout << '\n';
		printf("\n");
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!st[i]) {
			arr[u] = i;
			st[i] = true;
			dfs(u + 1);
			st[i] = false;
		}
	}
	return;
}
void solve() {
    cin >> n;
    dfs(0);
	return;
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