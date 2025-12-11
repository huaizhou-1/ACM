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
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            ss.push(s[i]);
        }
        else if (s[i] == ')') {
            if (!ss.empty() && ss.top() == '(')  {
                ss.pop();
            }
            else if (ss.empty()) {
                ans++;
            }
        }
    }
    while (!ss.empty()) {
        ss.pop();
        ans++;
    }
    cout << ans << '\n';
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