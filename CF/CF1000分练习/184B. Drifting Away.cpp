#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
	string s;
	cin >> s;
	if (s.size() == 1) {
		cout << "1\n";
		return;
	}
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '*' && s[i - 1] == '>') {
			cout << "-1\n";
			return;
		}
		if (s[i] == '*' && s[i + 1] == '<') {
			cout << "-1\n";
			return;
		}
		if (s[i] == '*' && s[i + 1] == '*') {
			cout << "-1\n";
			return;
		}
		if (s[i] == '>' && s[i + 1] == '<') {
			cout << "-1\n";
			return;
		}
	}
	int cnta = 0;
	int cntb = 0;
	int cntc = 0;
	int flaga = 0;
	int flagb = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '<') {
			cnta++;
		}
		if (s[i] == '>') {
			cntb++;
		}
		if (s[i] == '*') {
			cntc++;
			if (s[i - 1] == '<' || s[i + 1] == '<') {
				flaga = 1;
			}
			if (s[i - 1] == '>' || s[i + 1] == '>') {
				flagb = 1;
			}
		}
	}
	if (flaga) {
		cnta += cntc;
	}
	if (flagb) {
		cntb += cntc;
	}
	cout << max(cnta, cntb) << '\n';
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