#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    cin >> n;
    int mn = INT_MAX;
    int mx = INT_MIN;
    int arr[2 * n];
    int i = 0;
    while (n--) {
        int a = 0;
        int b = 0;
        cin >> arr[i++] >> arr[n++];
    }
    cout << mx - mn + 1;
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