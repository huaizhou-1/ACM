#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    int x, y, p, p1;
    cin >> x >> y >> p >> p1;
    if (x > y) {
        cout << "A";
        return;
    }
    else if (x < y) {
        cout << "B";
        return;
    }
    if (x == y) {
        if (p < p1) {
            cout << "A";
        }
        else if (p > p1){
            cout << "B";
        }
        else {
            cout << "C";
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