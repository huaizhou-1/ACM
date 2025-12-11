#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    ll n = 0;
    cin >> n;
    ll cnt = 0;
    int ans = 0;
    int flag = 0;
    for(n; n > 2; ans++) {
        for(int i = 1; i <= sqrt(n); i++) {
            if (n % i == 0) {
                 cnt++;   
                if (i == sqrt(n)) {
                    flag = 1;
                }
            }
        }
        if(flag == 1) {
            n = cnt * 2 - 1;
        }
        else {
            n = cnt * 2;
        }
        flag = 0;
        cnt = 0;
    }
    cout << ans;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int _ = 1;
	solve();
	return 0;
}