#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
int a[N];
int b[N];
void solve() {
    int n = 0;
    cin >> n;
    int x = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        x ^= a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
        x ^= b[i];
    }
    if (x == 0) {
        cout << "Tie\n";
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] != b[i]) {
            x = i;
        }
    }
    if (x % 2 == 1) {
        cout << "Ajisai\n";
    }
    else {
        cout << "Mai\n";
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