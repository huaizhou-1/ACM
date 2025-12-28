#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
double n,m,k,l,r;

bool check(double mid){
	return (pow(1.0 / (1.0 + mid), k) >= 1 - n  / m * mid);
}
void solve() {
	cin >> n >> m >> k;
	l = 0;
	r = 10;
	for (int i = 0; i < 50; i++) {
		double mid = (l + r) / 2.0;
		if (check(mid)) {r = mid;}
		else {l = mid;}
	}
	printf("%.1lf", l * 100);
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

