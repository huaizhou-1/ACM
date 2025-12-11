#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
struct zb {
    int x;
    int y;
};
double pf (double x) {
    return x * x;
}
void solve() {
    zb arr[3];
    for (int i = 0; i < 3; i++) {
        cin >> arr[i].x >> arr[i].y;
    }
    double a = sqrt(pf(arr[0].x - arr[1].x) + pf(arr[0].y - arr[1].y));
    double b = sqrt(pf(arr[2].x - arr[1].x) + pf(arr[2].y - arr[1].y));
    double c = sqrt(pf(arr[0].x - arr[2].x) + pf(arr[0].y - arr[2].y));s
    if (a + b > c && a + c > b && b + c > a) {
        cout << "triangle";
    }
    else {
        cout << "collinear";
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