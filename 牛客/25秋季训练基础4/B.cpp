#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
	string s;
	stack<char> stk;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
        if (s[i] == ']' && !stk.empty() && stk.top() == '[') {
            stk.pop();
        }
        else if (s[i] == '}' && !stk.empty() && stk.top() == '{') {
            stk.pop();
        }
        else if (s[i] == ')' && !stk.empty() && stk.top() == '(') {
            stk.pop();
        }
        else if (s[i] == ']' || s[i] == '}' || s[i] == ')') {
            cout << "No";
            return;
        }
        else {
            stk.push(s[i]);
        }
    }
	if(stk.empty()) cout << "Yes";
    else cout << "No";
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