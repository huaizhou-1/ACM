#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
int n, m, h;
ll arr[2005][2005];
ll cf[2005][2005];
ll summ[2005][2005];
ll sum = 0;
int i = 0;
int j = 0;
int z = 0;
void solve() {
    scanf("%d %d %d", &n, &m, &h);
    while (h--) {   
        scanf("%d %d %d", &i, &j, &z);
        cf[1][j] += z;
        cf[1][j + 1] -= z;
        cf[i][j + 1] += z;
        cf[i + 1][j + 1] -= z;
        
        cf[i][1] += z;
        cf[i][j] -= z;
        cf[i + 1][1] -= z;
        cf[i + 1][j] += z;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            summ[i][j] += cf[i][j] + summ[i][j - 1] + summ[i - 1][j] - summ[i - 1][j - 1];
            arr[i][j] += summ[i][j];
            sum += (arr[i][j] * (i + j)) % mod;
            sum %= mod;
        }
        // cout << '\n';
    }
    cout << sum % mod;
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