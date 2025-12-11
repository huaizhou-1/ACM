#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int a = 0;
    int m = 0;
    int l = 0;
    cin >> a >> m;
    for (int i = 0; i < m; i++) {
        l++;
        if(l > a) {
            l = 0;
        }
    }
    cout << l;
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