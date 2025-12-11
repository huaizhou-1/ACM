#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    cin >> n;
    int a = 0;
    int b = 0;
    int ans = 0;
    int ans1 = 0;
    int flaga = 0;
    int flagb = 0;
    for (int i = 1; i < n; i++) {
        cin >> a >> b;
        if (ans == a)
        {
            ans = a;
            flaga++;
        }
        if (ans == b) {
            ans = b;
            flaga++;
        }
        if (ans1 == a) {
            ans1 = a;
            flagb++;
        }
        if (ans1 == b) {
            ans1 = b;
            flagb++;
        }
        if (i == 1) {
            ans = a;
            ans1 = b;
        }
    }
    if (flaga >= flagb) {
        cout << ans;
    }
    else {
        cout << ans1;
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