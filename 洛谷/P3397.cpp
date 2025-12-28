#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
int sum[100][100];
int b[100][100];

void solve() {
    int n = 0;
    int m = 0;
    cin >> n >> m;
    while (m--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        b[x1][y1]++;
        b[x2 + 1][y1]--;
        b[x1][y2 + 1]--;
        b[x2 + 1][y2 + 1]++;
    }
    for (int i = 1; i <= n; i++) {
        for (int j= 1; j <= n; j++) {
            b[i][j] += b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << b[i][j] << " ";
        }
        cout << '\n';
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