#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1e7 + 9;
const ll mod = 1e9 + 7;
ll arr[N];
ll check (ll H, ll n) {
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        if (arr[i] > H) {
            sum += arr[i] - H;
        }
    }
    return sum;
}
void solve() {
    ll n = 0;
    ll m = 0;
    cin >> n >> m;
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    ll l = 0;
    ll r = arr[n - 1];
    ll ans = 0;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        ll sum = check(mid, n);
        if (sum >= m) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    cout << ans;
}

int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	ll _ = 1;
	// cin >> _;
	while (_--) {
		solve();
	}
	return 0;
}