#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    int arr[105];
    cin >> n;
    int mx = 0;
    int mn = 299;
    int mxx = 0;
    int mnx = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        if (mn > arr[i]) {
            mn = min(mn, arr[i]);
            mnx = i;
        }
        if (mx < arr[i]) {
            mx = max(mx, arr[i]);
            mxx = i;
        }   
    }
    cout << min(mnx, mxx) << " " << max(mnx, mxx) << " " << mx - mn;
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