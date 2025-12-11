#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    cin >> n;
    int flag = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int k = i + 1; k < n / 2 ; k++) {
           for (int j = k + 1; j < n; j++) {
            if (j + k + i == n && i * i + k * k == j * j) {
                    flag++;
                    ans = i * j * k;
            }
           }
        }
    }
    if (flag == 1) {
        cout << ans;
    }
    if (flag == 0) {
        cout << "No Joyfine";
    }
    if (flag > 1) {
        cout << "Many" << " " << flag;
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