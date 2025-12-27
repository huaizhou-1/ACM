#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;
int arr[N];
int brr[N];

void solve() {
	int n;
    cin >> n;
    while (n--) {
        string a, b;
        cin >> a >> b;
        ll l = 0;
        ll r = 0;
        l += 3600 * ((10 * (a[0] - '0')) + (a[1] - '0'));
        l += 60 * ((10 * (a[3] - '0')) + (a[4] - '0'));
        l += 1 * ((10 * (a[6] - '0')) + (a[7] - '0'));

        r += 3600 * ((10 * (b[0] - '0')) + (b[1] - '0'));
        r += 60 * ((10 * (b[3] - '0')) + (b[4] - '0'));
        r += 1 * ((10 * (b[6] - '0')) + (b[7] - '0'));

        brr[l]++;
        brr[r + 1]--;
    }
    arr[0] = brr[0];
    int mx = brr[0];
    for (int i = 1; i < N; i++) {
        arr[i] = brr[i] + arr[i - 1];
        mx = max(mx, arr[i]);
    }
    cout << mx;
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