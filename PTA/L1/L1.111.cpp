#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
ll ksm(ll x, ll k) {
    ll res = 1;
    ll t = x;
    while (k)
    {
        if (k & 1) res = res * t;
        t = t * t;
        k >>= 1;
    }
    return res;
}
void solve() {
	ll n;
    cin >> n;
    ll a = 1;
    int k = 0;
    while (n > a) {
        k++;
        a *= 2;
    }
    k--;
    int tmp = 0;
    int flag = 0;
    for (k; k > 0; k--) {
        ll ans = 0;
        int i = 1;
        while (ans < n) {
            ans += ksm(i, k);
            i++;
        }
        if (ans == n) {
            tmp = i;
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        cout << "Impossible for ";
        cout << n << ".";
        return;
    }
    for (int i = 1; i < tmp; i++) {
        cout << i;
        cout << "^" << k;
        if (i != tmp - 1) {
            cout << "+";
        }
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