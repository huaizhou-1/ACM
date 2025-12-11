#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 105;
const int mod = 1e9 + 7;

bool vis[N][N];
char arr[N][N];
int dx[8] = {1, 1, 1, 0, 0, -1, -1, -1};
int dy[8] = {1, -1, 0, 1, -1, 1, -1, 0};
int n = 0;
string s = "yizhong";
int cnt = 0;

void dfs(int x, int y) {
    if (x < 1 || y < 1 || x > n || y > n) {
        return;
    }
    if (arr[x][y] == 'g') {
        return;
    }
    for (int i = 0; i < 8; i++) {
       if (arr[x + dx[i]][y + dy[i]] == s[cnt]) {
            vis[x][y] = true;
            cnt++;
            dfs(x + dx[i], y + dy[i]);
            cnt--;
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
    if (arr[1][1] == 'y') {
        cnt++;
        vis[1][1] = true;
    }
    dfs(1, 1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (vis[i][j] == true) {
                cout << arr[i][j];
            }
            else {
                cout << "*";
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