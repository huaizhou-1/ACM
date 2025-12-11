#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    cin >> n;
    if (n <= 1) {cout << 0;}
    if (n > 1 && n <= 5) {cout << (8* n);}
    if (n > 5 ) {
        int ans = 40;
        for (int i = n; i > 5; i--) {
            ans += 8 + i - 5;
        }
        if (ans > 300) {cout << 300;}
        else {cout << ans;}
    }
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