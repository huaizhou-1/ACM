#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 35;
const int mod = 1e9 + 7;
int arr[N][N];
int n = 0;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
queue<pair<int, int>> q;
int x = 0;
int y = 0;

void bfs() {
    while (!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            if (arr[x + dx[i]][y + dy[i]] == 0 && x + dx[i] >= 0 && y + dy[i] >= 0 && x + dx[i] <= n + 1 && y + dy[i] <= n + 1) {
                arr[x + dx[i]][y + dy[i]] = 3;
                q.push({x + dx[i], y + dy[i]});
            }
        }
    }
}

void solve() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> arr[i][j];
        }
    }
    q.push({0, 0});
    if (arr[0][0] == 0) {
        arr[0][0] = 3;
    }
    bfs();
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (arr[i][j] == 3) {
                cout << "0 ";
            }
            else if (arr[i][j] == 1) {
                cout << "1 ";
            }
            else {
                cout << "2 ";
            }
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