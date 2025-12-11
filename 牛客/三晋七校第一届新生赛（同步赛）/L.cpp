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
    stack<char> ss;
    int cnt = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (!ss.empty() && s[i] == '(') {
            while (!ss.empty()) {
                ss.pop();
            }
            ss.push(s[i]);
            cnt = 1;
        }
        if (s[i] == '(' && ss.empty()) {
            ss.push(s[i]);
            cnt++;
        }
        if (!ss.empty()){
            if (ss.top() == '(' && s[i] == '#' || ss.top() == '#' && s[i] == '#') {
                ss.push(s[i]);
                cnt++;
            }
        }
        if (s[i] == ')' && !ss.empty()) {
            ss.push(s[i]);
            cnt++;
            ans = max(ans, cnt);
            cnt = 0;
        }
    }
    cout << ans;
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