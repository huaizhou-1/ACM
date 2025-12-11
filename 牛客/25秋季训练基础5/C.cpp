#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
double p = 3.1415926535;
void solve() {
    int n, r;
    cin >> n >> r;
    int i, j;
    cin >> i >> j;
    double b = sin(p / n) * r;
    double c = min(abs(i - j), n - abs(i - j));
    printf("%.6lf", b * c * 2.0);

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