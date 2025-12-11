#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    ll a, b, n;
    cin >> a >> b >> n;
    if (b * n <= a || b >= a) {
        cout << "1\n";
        return;
    }
    else {
        cout << "2\n";
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