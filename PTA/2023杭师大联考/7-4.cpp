#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int a = 0;
    int b = 0;
    int c = 0;
    cin >> a >> b >> c;
    if (a + b + c < 1000 && a % 12 == 0 && a - b > b - c) {
        cout << "Yes";
    }
    else {
        cout << "No";
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