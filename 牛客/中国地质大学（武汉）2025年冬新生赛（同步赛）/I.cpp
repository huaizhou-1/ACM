#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
ll arr[N];
bool cmp(ll x, ll y) {
    return x >= y;
}
void solve() {
    ll m;
    cin >> m;
    ll cnt = 0; 
    int k = 0;
    for (int i = 1; i <= sqrt(m) + 10 && i <= m; i++) {
        if (m % i == 0) {
            arr[k] = i;
            // cout << arr[k] << " ";
            k++; 
        }
    }
    sort(arr, arr + k, cmp);
    for (int i = 0; i < k - 1; i++) {
        // cout << arr[i] << " ";
        if (arr[i] - arr[i + 1] == 1) {
            cnt++;
        }
    }
    cout << cnt;
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