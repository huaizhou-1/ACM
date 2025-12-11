#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    ll s = 1e18;
    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int a = 0;
        cin >> a;
        mp[a]++;
    }
    int ar = mp.size();
    for (auto [color, shu]: mp) {
        if (color >= ar) {
            cout << color << '\n';
            return;
        }
    }
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