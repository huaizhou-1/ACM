#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    int m = 0;
    int x = 0;
    int y = 0;
    ll ans = 0;
    ll a = 0;
    ll b = 0;
    cin >> n >> m >> x >> y;
    for(int i = 0; i < n; i++) {
        cin >> a;
        if(a <= x) {
            ans++;  
            //  cout << a << endl;       
        }
    }
    for(int i = 0; i < m; i++) {
        cin >> b;
        if(b <= y) {
            ans++; 
            // cout << b << endl;
        }
    }
     cout << m + n << endl;
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