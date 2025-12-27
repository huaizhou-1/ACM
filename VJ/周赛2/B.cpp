#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n, k;
    cin >> n >> k;
	int arr[n + 1][n + 1];
    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++) {
            arr[i][j + 1] = s[j] - '0';
        }
    }
    for (int i = 1; i <= n; i += k) {
        for (int j = 1; j <= n; j += k) {
            cout << arr[i][j];
        }
        cout << '\n';
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