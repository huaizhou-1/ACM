#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int winner = 0;
    int loser = 0;
    cin >> winner;
    int ans = 0;
    int temp = 0;
    while(loser != 1 || winner != 1) {
        ans += winner / 2;
        temp = winner / 2;
        winner = (winner + 1) / 2;
        ans += loser / 2;
        loser = (loser + 1) / 2;
        loser += temp; 
    }
    cout << ans + 1 << endl;
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