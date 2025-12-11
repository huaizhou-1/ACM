#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    cin >> n;
    cout << "*";
    for (int i = 1; i <= n; i++) {
        cout << "   " << "*";
    }
    cout << endl << " ";
    cout << "*";
    for (int i = 1; i <= 2 * n - 1; i++) {
        cout << " " << "*";
    }
    cout << endl << "  ";
    cout << "*";
    for (int i = 0; i < n - 1; i++) {
        cout << "   " << "*";
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