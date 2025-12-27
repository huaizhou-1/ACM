#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
	string s;
    cin >> s;
    stack<char> st;
	vector<char> arr;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ')') {
            st.push(s[i]);
        }
		if (s[i] == ')') {
			while (st.top() != '(') {
				arr.push_back(st.top());
				st.pop();
			}
			reverse(arr.begin(), arr.end());
			for (int i = 0; i < arr.size(); i++) {
				cout << arr[i];
			}
			cout << '\n';
			st.pop();
			arr.clear();
		}
    }
	while (!st.empty()) {
		if (st.top() != '(' && st.top() != ')') {
			arr.push_back(st.top());
			st.pop();
			reverse(arr.begin(), arr.end());
			for (int i = 0; i < arr.size(); i++) {
				cout << arr[i];
			}
		}
		else {
			st.pop();
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