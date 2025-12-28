#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define miaomiao ll
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
	miaomiao n; cin >> n;
    vector<miaomiao> arr(n + 1);
    for (miaomiao i = n; i >= 0; i--) {
        miaomiao a; cin >> a;
        if (a) {
            if (i != n && a > 0) cout << "+";
            if (abs(a) > 1 || i == 0) cout << a;
            if (a == -1 && i) cout << "-";
            if (i != 0) cout << "x";
            if (i > 1) cout << "^" << i;
        }
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