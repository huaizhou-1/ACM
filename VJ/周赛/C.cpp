#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1e7;
const int mod = 1e9 + 7;
map<ll, ll> p;
queue<ll> q;
ll x, y;
void yi (int x, int y) {
    // if (p[x] == 0) {
        q.push(x);
    // }
    p[x] += y;
}

void er (int x, int y) {
    p[x] = max(p[x] - y, 0ll);
}

void san () {
    while (!q.empty()) {
        if(p[q.front()] > 1) {
            p[q.front()] = 1ll;
        }
        q.pop();
    }
}

void si (int x) {
    cout << p[x] << "\n";
}
void solve() {
    int n = 0;
    cin >> n;
    if (n == 1) {
        cin >> x >> y;
        yi(x, y);
    }
    if (n == 2) {
        cin >> x >> y;
        er(x, y);
    }
    if (n == 3) {
        san();
    }
    if (n == 4) {
        cin >> x;
        si(x);
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