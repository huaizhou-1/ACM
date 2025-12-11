#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if ((l1 > l2 && r1 < r2) || (l1 < l2 && r2 < r1)) {
        cout << 'A';
    }
    else if (r1 < l2 || l1 > r2) {
        cout << 'B';
    }
    else {
        cout << 'C';
    }
    cout << '\n';
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