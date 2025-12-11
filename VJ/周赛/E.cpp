#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    int year = 0;
    int month = 0;
    int ans = 0;
    cin >> year >> month;
    if (year == 2016) {
        cout << month - 8 + 1;
        return;
    }
    ans += 5;
    ans += 12 * (year - 2017);
    ans += month;
    cout << ans;
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