#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
int arr[10][10];
bool brr[10][10];
bool crr[10][10];
ll ans = 0;
void dfs(int x, int y) {
    if (x > 7) {
        ans++;
        return;
    }
    for (int i = 1; i <= 6; i++) {
        if (!crr[x][i] && i != y) {   
            dfs(x + 1, i);
        }
    }
}
void solve() {
	int n = 0;
    cin >> n;
    int x, y;
    while (n--) {
        cin >> x >> y;
        crr[x][y] = true;
    }
    for (int i = 1; i <= 6; i++) {
        if (!crr[1][i]) {
            dfs(2, i);
        }
    }
    cout << ans;
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