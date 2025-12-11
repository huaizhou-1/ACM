#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 500;
const int mod = 1e9 + 7;

int n, m, sx, sy;
queue<pair<int,int>> q;
int arr[N][N];
bool vis[N][N];
int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {1, -1, 2, -2, 2, -2, 1, -1};
int cnt = 0;

void bfs (int x, int y) {
	while (!q.empty()) {
		int tx = q.front().first;
		int ty = q.front().second;
		q.pop();
		for (int i = 0; i < 8; i++) {
			int xx = tx + dx[i];
			int yy = ty + dy[i];
			// cout << xx << " " << yy << '\n';
			if (xx > n || xx < 1 || yy < 1 || yy > m || vis[xx][yy]) {
				continue;
			}
			q.push({xx, yy});
			vis[xx][yy] = true;
			arr[xx][yy] = arr[tx][ty] + 1;
		}
	}
}

void solve() {
	cin >> n >> m >> sx >> sy;
	q.push({sx, sy});
	vis[sx][sy] = true;
	bfs(sx, sy);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (arr[i][j] == 0 && i != sx || j != sy) {
				cout << "-1 ";
			}
			else {
				cout << arr[i][j] << " "; 
			}
		}
		cout << '\n';
	}
	return;
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