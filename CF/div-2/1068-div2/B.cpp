#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n + 5);
    vector<int> brr(n + 5);
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> brr[i];
    }
    ll mx = 0;
    ll mn = 0;
    for (int i = 1; i <= n; i++) {
       ll new_max = max(mx - arr[i], brr[i] - mn);
       ll new_min = min(mn - arr[i], brr[i] - mx);
       mx = new_max;
       mn = new_min;
    }
    cout << mx << '\n';
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