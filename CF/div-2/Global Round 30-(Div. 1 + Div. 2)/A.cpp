#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
int arr[N];
void solve() {
    int n = 0;
    cin >> n;
    cin >> arr[0];
    int mx = arr[0];
    int mn = arr[0];
    for (int i = 1; i < n; i++) {
        cin >> arr[i];
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
    }
    int x = 0;
    cin >> x;
    if (x >= mn && x <= mx) {
        cout << "Yes\n";
    }
    else {
        cout << "NO\n";
    }
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