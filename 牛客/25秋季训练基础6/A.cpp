#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    double a, b, c;
    cin >> a >> b >> c;
    if (a + b <= c || a + c <= b || c + b <= a) {
        printf("wtnl");
        return;
    }
    double r1 = 0;
    double r2 = 0;
    double r3 = 0;
    double l = 0;
    double r = a;
    for (int i = 0; i < 150; i++) {
        r1 = (l + r) / 2.0;
        r2 = a - r1;
        r3 = b - r1;
        if (r2 + r3 < c) {
            r = r1;
        }
        else {
            l = r1;
        }
        r2 = a - r1;
        r3 = b - r1;
    }
    r2 = a - r1;
    r3 = b - r1;
    if (r1 > 0 && r2 > 0 && r3 > 0 && r2 + r3 <= c) {
        double arr[3];
        arr[1] = r1;
        arr[2] = r2;
        arr[0] = r3;
        sort(arr, arr + 3);
        printf("Yes\n");
        printf("%.2lf %.2lf %.2lf", arr[0], arr[1], arr[2]);
        return;
    }
    printf("No");
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