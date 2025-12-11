#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
       int n = 0;
       int ans = 0;
       int mi = 0;
       cin >> n;
       vector<int> village(n);
       for(int i = 0; i < n; i++) {
        cin >> village[i];
       }
       sort(village.begin(),village.end());
       for(int i = n - 1; i >= 0; i -= 2) {
        ans += village[i];
       }
       cout << ans << endl;
        
}
signed main()
{
    int t = 0;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}