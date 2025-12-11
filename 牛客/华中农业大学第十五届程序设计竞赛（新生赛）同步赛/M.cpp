#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    ll n, x;
    cin >> n >> x;
    ll arr[n + 5] = { 0 };
    ll brr[n + 5] = { 0 };
    ll ans = 0; 
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++) {
        brr[i] = arr[i] - arr[i - 1];
    }
    for (int i = 1; i <= n; i++) {
        if (brr[i] < 0) {
            ans += abs(brr[i]);
            brr[i + x] -= abs(brr[i]);
        }
    }
    cout << ans << '\n';
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