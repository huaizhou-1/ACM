#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
int arr[N];
int cf[N];
void solve() {
    int n, p;
    cin >> n >> p;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++) {
        cf[i] += arr[i];
        cf[i + 1] -= arr[i];
    }
    while (p--) {
        int x = 0;
        int y = 0;
        int z = 0;
		cin >> x >> y >> z;
        cf[x] += z;
        cf[y + 1] -= z;
    }
    for (int i = 1; i <= n ;i++) {
        cf[i] += cf[i - 1];
    }
    sort(cf + 1, cf + n + 1);
    cout << cf[1];
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