#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
vector<int> c(26);
void solve() {
    string s, t;
    cin >> s >> t;
    map<char, int> mp;
    int lens = s.size();
    int lent = t.size();
    for (auto ch: t) {
        mp[ch]++;
    }
    for (auto ch: s) {
        mp[ch]--;
        if (mp[ch] < 0) {
            cout << "Impossible\n";
            return;
        }
    }
    t.clear();
    for (auto [ch, cnt]: mp) {
        for (int i = 0; i < cnt; i++) {
            t.push_back(ch);
        }
    }
    sort(t.begin(), t.end());
    reverse(t.begin(), t.end());
    for (auto ch: s) {
        while (t.size() && t.back() < ch) {
            cout << t.back();
            t.pop_back();
        }
        cout << ch;
    }
    while (t.size()) {
        cout << t.back();
        t.pop_back();
    }
    cout << '\n';
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