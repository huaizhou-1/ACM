#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
int jd[N];

void solve() {
    int n = 0;
    cin >> n;
    int a = 0;
    int b = 0;
    int cnt = 0;
    for (int i = 1; i < n; i++) {
        cin >> a >> b;
        // cout << a << " " << b << '\n';
        jd[a]++;
        jd[b]++;
    }
    for (int i = 1; i <= n; i++) {
        if (jd[i] > 2) {
            cnt += jd[i] - 2;
        }
    }
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