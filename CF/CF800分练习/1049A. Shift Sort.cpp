#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    cin >> n;
    string a = "";
    cin >> a;
    int cnt0 = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == '0') {
            cnt0++;
        }
    }
    int ans = 0;
    for (int i = 0; i < cnt0; i++) {
        if (a[i] != '0') {
            ans++;
        }
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