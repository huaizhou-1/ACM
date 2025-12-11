#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        // cout << m % n << " ";
        if (m % i == 0) {
            cnt++;
        }
    }
    if (cnt % 2 == 0) {
        cout << "No\n";
    }
    else {
        cout << "Yes\n";
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