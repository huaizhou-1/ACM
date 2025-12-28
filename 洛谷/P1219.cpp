#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 30;
const int mod = 1e9 + 7;
int n;
int arr[N];
bool duijiao[N];
bool fanduijiao[N];
bool lie[N];
int cnt = 0;
void dfs(int u) {
    if (u == n) {
        if (cnt < 3) {
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << '\n';
        }
        cnt++;
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (!duijiao[u - i + n + 1] && !fanduijiao[u + i - 1] && !lie[i]) {
            arr[u] = i;
            duijiao[u - i + n + 1] = true;
            fanduijiao[u + i - 1] = true;
            lie[i] = true;
            dfs(u + 1);
            duijiao[u - i + n + 1] = fanduijiao[u + i - 1] = lie[i] = false;
        }
    }
    return;
}
void solve() {
    cin >> n;
    dfs(0);
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