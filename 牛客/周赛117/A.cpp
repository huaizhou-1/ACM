#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    int a, b;
    cin >> a >> b;
    if (a == 1) {
        if (b == 1) {cout << "LU";}
        if (b == 2) {cout << "LD";}
    }
    if (a == 2) {
        if (b == 1) {cout << "RU";}
        if (b == 2) {cout << "RD";}
    }
    return;
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