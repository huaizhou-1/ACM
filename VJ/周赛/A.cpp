#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1e7 + 9;
const ll mod = 1e9 + 7;
ll n, m;
ll arr[N];
ll ans = 0;
bool check (ll mid) {
    ll cnt = 1;
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        if (arr[i] > mid) {
            return false;
        }
        if (sum + arr[i] > mid) {
            sum = 0;
            cnt++;  
        }
        sum += arr[i]; 
    }
    if (cnt <= m) {
        return true;
    }
    else {
        return false;
    }
}
ll erfen(ll l, ll r) {
    while (l <= r)
    {
      ll mid = l + (r - l) / 2;
      if (check(mid)) r = mid - 1;
      else l = mid + 1;
    }
    cout << l;
    return l;
}

void solve() {
    cin >> n >> m;
    for (ll i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    erfen(0, 1e9 + 10);
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