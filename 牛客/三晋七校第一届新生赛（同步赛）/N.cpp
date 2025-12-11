#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    string s;
    cin >> s;
    vector<int> ll;
    vector<int> rr;
    int n = s.size();
    int l = 0;
    int r = n - 1;
    int flag1 = 0;
    while (l < r) {
        int a = s[l] - '0';
        int b = s[r] - '0';
        // cout << a << " " << b;
        if (a < b) {
            ll.push_back(b - a);
            rr.push_back(0);
            flag1 = 1;
        }
        else if (a > b) {
            rr.push_back(a - b);
            ll.push_back(0);
            flag1 = 1;
        }
        else if (a == b) {
            ll.push_back(b - a);
            rr.push_back(0);
        }
        l++;
        r--;
        // cout << '\n';
    }
    if (flag1 == 0) {
        cout << 0;
        return;
    }
    if (l == r) {
        ll.push_back(0);
    }
    int flag = 0;
    for (int i = 0; i < ll.size(); i++) {
        if (ll[i] != 0) flag = 1;
        if (ll[i] == 0 && flag == 0) continue; 
        cout << ll[i];
    }
    flag = 0;
    for (int i = rr.size() - 1; i >= 0; i--) {
        // if (rr[i] != 0) flag = 1;
        // if (rr[i] == 0 && flag == 0) continue; 
        cout << rr[i];
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