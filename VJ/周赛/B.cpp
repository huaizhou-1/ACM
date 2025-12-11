#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e4 + 9;
const int mod = 1e9 + 7;
int arr[N];
int bo[N][N];
void solve() {
    int n, i, h, r;
    cin >> n >> i >> h >> r;
    fill(arr, arr + N, h);
    while (r--) {
        int a = 0;
        int b = 0;
        cin >> a >> b;
        if (bo[a][b] >= 1) {
                continue;
        }
        bo[a][b]++;
        for (int i = min(a, b) + 1; i < max(a, b); i++) {
            arr[i]--;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << "\n";
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