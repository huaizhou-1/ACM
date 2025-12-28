#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 100;
const int mod = 1e9 + 7;
bool df[N][N];
int n, m, t;
int sx, sy, fx, fy;
int cnt = 0;
void dfs (int x, int y) {
    if (x < 1 || y < 1 || x > m || y > n) {
        return;
    }
    if (df[x][y]) {
        return;
    }
    if (x == fx && y == fy) {
        cnt++;
        return;
    }
    df[x][y] = true;
    if (!df[x + 1][y]) {
        dfs(x + 1, y);
    }
    if (!df[x][y + 1]) {           
        dfs(x, y + 1);           
    }
    if (!df[x - 1][y]) {          
        dfs(x - 1, y);     
    }
    if (!df[x][y - 1]) {           
        dfs(x, y - 1);
    }
    df[x][y] = false;
}
void solve() { 
    cin >> n >> m >> t;
    cin >> sx >> sy >> fx >> fy;
    while (t--) {
        int x1, y1;
        cin >> x1 >> y1;
        df[x1][y1] = true;
    }
    dfs(sx, sy);
    cout << cnt;
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