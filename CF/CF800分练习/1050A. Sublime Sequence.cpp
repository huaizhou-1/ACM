#include<bits/stdc++.h>
//#define int long long
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    int x = 0;
    cin >> x >> n;
    if (n % 2 == 0) {
        cout << 0 << endl;
    }
    else {
        cout << x << endl;
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