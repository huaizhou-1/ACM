#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
int n, m;
void solve() {
    cin >> n >> m;
    basic_string<int> a(n, 0);
	for (auto &x: a) cin >> x;
	while(m--) {
		int op;
		cin >> op;
		if (op == 1) {
			int l1;  cin >> l1;
			basic_string<int> s1(l1, 0);
			for (auto &x: s1) cin >> x;
			int l2;  cin >> l2;
			basic_string<int> s2(l2, 0);
			for (auto &x: s2) cin >> x;
			int p = a.find(s1);
			if (p != a.npos) a.replace(p, l1, s2);
		}
		if (op == 2) {
			for (int i = a.size() - 2; i >= 0; i--) {
				if ((a[i] + a[i + 1]) % 2 == 0) {
					a.insert(i + 1, {(a[i] + a[i + 1]) / 2});
				}
			}
		}
		if (op == 3) {
			int l, r;
			cin >> l >> r;
			l--, r--;
			for (l; l < r; l++, r--) {
				swap(a[l], a[r]);
			}
		}
	}
	for (int i = 1; auto x: a) {
		cout << x << " \n"[i++ == a.size()];
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