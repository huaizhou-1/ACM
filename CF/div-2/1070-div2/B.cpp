#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
	int n = 0;
    cin >> n;
    string s;
    cin >> s;
    int mx = INT_MIN;
    int tmx = 0;
    int cnt = 0;
    int flag = 1;
    for (int i = 0; i < n; i++) {
        if (flag && s[i] == '0') {
            cnt++;
        }
        if (s[i] == '1') {
            flag = 0;
        }
        if (flag == 0 && s[i] == '0') {
            tmx++;
            if (s[i + 1] == '1') {
                mx = max(tmx, mx);
                tmx = 0;
            }
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '1') {
            break;
        }
        cnt++;
    }
    cout << max(cnt, mx) << '\n';
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int _ = 1;
	cin >> _;
	while (_--) {
		solve();
	}
	return 0;
}