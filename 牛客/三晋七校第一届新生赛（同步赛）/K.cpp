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
    int flag = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0' && flag == 0) {
            cout << 0;
        }
        else if (s[i] == '1' && flag == 0) {
            cout << 1;
            flag = 1;
        }
        else if (s[i] == '0' && flag == 1) {
            cout << 1;
            flag = 0;
        }
        else if (s[i] == '1' && flag == 1) {
            cout << 0;
        }
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