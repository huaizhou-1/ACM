#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
   int n = 0;
   string s;
   string t;
   cin >> n;
   cin >> s >> t;
    for (int i = 0; i < n; i++) {
        int flag = 0;
        for (int j = 0; j < n; j++) {
            // cout << s[j] << " " << t[i] << "\n";
            if (s[j] == t[i]) {
                flag = 1;
                s[j] = '_';
                break;
            }
        }
        if (flag == 0) {
            cout << "NO" << "\n";
            return;
        }   
    }
    cout << "YES" << "\n";
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