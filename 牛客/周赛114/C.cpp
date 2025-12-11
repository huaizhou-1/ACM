#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    cin >> n;
    string s;
    cin >> s;
    int flag1 = 0;
    int flag2 = 0;
    int flag3 = 0;
    int flag4, flag5, flag6;
    int j = 2;
    for (int i = 0 ; i < n; i++, j++) {
        flag4 = 0;
        flag5 = 0;
        flag6 = 0;
        if (s[i] == '1') flag1 = 1;
        if (s[i] == '2') flag2 = 1;
        if (s[i] == '3') flag3 = 1;
        for (int k = i; k <= j; k++) {
            if (s[k] == '1') flag4 = 1;
            if (s[k] == '2') flag5 = 1;
            if (s[k] == '3') flag6 = 1;
        }
        if (flag4 == 1 && flag5 == 1 && flag6 == 1) {
            cout << 0 << endl;
            return;
        }
    }
    if (flag1 == 1 && flag2 == 1 && flag3 == 1) {
        cout << 1 << endl;
    }
    else {
        cout << -1 << endl;
    }
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