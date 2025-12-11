#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
int arr[N];
int xfs[N];
int xfscf[N];

void solve() {
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        // cout << arr[i] << " ";
    }
    int m = 0;
    cin >> m;
    while (m--) {
        int l = 0;
        int r = 0;
        cin >> l >> r;
        xfscf[l]++;
        xfscf[r + 1]--;
    }
    for (int i = 1; i <= n; i++) {
        xfs[i] = xfscf[i] + xfs[i - 1];
        // cout << xfscf[i] << " ";
    }
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        if (xfs[i] % 2 == 1) {
            arr[i] = -arr[i];
        }
        sum += arr[i];
    }
    cout << sum;
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