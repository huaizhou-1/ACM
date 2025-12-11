#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0 ;
    int k = 0;
    cin >> n >> k;
    string s = "";
    cin >> s;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int flag = 0;
        // cout << i << endl;a
        // if (i >= k - 1) {
            for (int j = i - k + 1; j < i; j++) {
                // cout << s[j] << " ";
                if (s[j] == '2') {
                    flag = 1;
                    if (s[i] == '1') {
                        s[i] = '2';
                    }
                }
            }
            // cout << endl;
        // }
        if(s[i] == '1' && flag == 0) {
            s[i] = '2';
            ans++;
            flag = 0;
        }
    }
    cout << ans << endl;
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