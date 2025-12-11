
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
double a = 0;
double b = 0;
double c = 0;
double d = 0;
double jg(double x) {
    return (a * x * x * x) + (b * x * x) + (c * x) + d;
}
void solve() {
    cin >> a >> b >> c >> d;
    int ans = 0;
    for (int i = -100; i < 100; i++) {
        double l = i;
        double r = i + 1;
        // cout << jg(l) * jg(r);
        if (fabs(jg(l)) < 1e-8) {  
            printf("%.2lf ", l);  
            ans++;
            if (ans == 3) return;  
            continue;
        }
        if (fabs(jg(r)) < 1e-8) {  
            continue;
        }
        if (jg(l) * jg(r) < 0) {
            // cout << 1;
            while (r - l > 1e-4) {
                // cout << 1;
                double mid = l + (r - l) / 2;
                if (jg(l) * jg(mid) < 0) {r = mid;}
                else {l = mid;}
            }
            printf("%.2lf ", l);
            ans++;
        }
        if (ans == 3) {
            return;
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