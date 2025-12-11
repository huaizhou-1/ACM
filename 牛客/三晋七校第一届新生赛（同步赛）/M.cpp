#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

int solve() {
    int a = 0;
    int b = 0;
    cin >> a >> b;
    return b - a + 1;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int _ = 1;
	cin >> _;
    ll ans = 1;
	while (_--) {
		ans *= solve();
	}
    if (ans <= 1e5) {
        cout << "NO TLE";
    }
    else if (ans > 1e7) {
        cout << "TLE";
    }
    else {
        cout << "POSSIBLE";
    }
	return 0;
}