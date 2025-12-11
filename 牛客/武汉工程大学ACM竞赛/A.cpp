#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
	int m, n;
    cin >> n >> m;
    string s1;
    string s2;
    cin >> s1 >> s2;
    int j = 0;
    int flag = 0;
    for (int i = 0; i < n; i++) {
        if (s1[i] == s2[0]) {
            for (j = 0; j < m; j++) {
                // cout << s1[i + j] << " " << s2[j] << '\n';
                if (s1[i + j] != s2[j]) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                cout << "Yes";
                return;
            }
        }
        flag = 0;
    }
    cout << "No";
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