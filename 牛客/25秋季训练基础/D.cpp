#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;



void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int mn = 1e9;
    for (int i = 0; i < 26; i++) {
        char x = 'a' + i;
        int cnt = 0;
        vector<int> a;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == x) {
                cnt++;
                a.push_back(j);
            } 
            if (cnt >= k) {
                mn = min(mn, a[cnt - 1] - a[cnt - k] + 1);
            }
        }
    }
    if (mn == 1e9) {
        cout << "-1\n";
        return ;
    }
    cout << mn << "\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int _ = 1;
	solve();
	return 0;
}