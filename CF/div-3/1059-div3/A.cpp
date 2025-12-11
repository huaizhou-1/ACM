#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        // cout << arr[i] << endl;
        sum += arr[i];
    }
    // cout << n;
    int i = 0;
    int ans = sum / n;
    int j = n;
    sort(arr, arr + n);
    // int a = sum / j;
    for (i = 0; i < n; i++) {
        sum -= arr[i];
        j--;
        if (j > 0)
        ans = max(ans, sum / j);
    }
    cout << ans << endl;
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