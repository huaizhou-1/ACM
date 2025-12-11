#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n, l, r;
    cin >> n >> l >> r; 
    vector<int> qzh(n + 5);
    for (int i = 0; i <= n; i++) {
        qzh[i] = i;
    }
    qzh[r] = qzh[l - 1];
    for (int i = 1; i <= n; i++) {
        cout << (qzh[i] ^ qzh[i - 1]) << " ";
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