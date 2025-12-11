#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    cin >> n;
    if (n % 2 == 1) {
        cout << "0\n";
        return;
    }
    int tmp = n / 4;
    cout << tmp + 1 << '\n';
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