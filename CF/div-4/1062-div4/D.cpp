#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
     int n = 0;
     cin >> n;
     ll arr[n];
     ll x = 0;
     for (int i = 0; i < n; i++) {
          cin >> arr[i];
          if (i != 0) {
               x = gcd(arr[i], x);
          }
          else {
               x = arr[i];
          }
     } 
     int ans = 2;
     while(gcd(ans, x) != 1) {
          ans++;
     }
     cout << ans << "\n";
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