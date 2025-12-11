#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 998244353;

int ksm(ll m, ll k, ll p)
{
    int res = 1 % p, t = m;
    while (k)
    {
        if (k & 1) res = res * t % p;
        t = t * t % p;
        k >>= 1;
    }
    return res;
}

void solve() {
    ll n, k;
    cin >> n >> k;
    ll cnt = 0;
    ll tmp = 0;
    ll mn = LONG_LONG_MAX;
    for (int i = 1; i <= n ; i++) {
        cin >> tmp;
        if (i % 2 == 1) {
            cnt += tmp;
        }
        else {
            cnt -= tmp;
        }
        mn = min(mn, cnt);
    }
    while (mn < 0) {
        mn++;
        k >>= 1;
        cnt++;
        if (k == 0) {
            cout << "0\n";
            return;
        }
    }
    k %= mod;
    cout << k * ksm(2, cnt, mod) % mod << '\n';
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