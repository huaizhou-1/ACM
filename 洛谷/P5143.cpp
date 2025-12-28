#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;
struct zb {
    double x = 0;
    double y = 0;
    double z = 0;
};
double pw (double a) {
    return a * a;
} 
bool cmp (zb x, zb y) {
    return x.z <= y.z;
}
void solve() {
    int n = 0;
    cin >> n;
    zb s;
    zb arr[n];
    for (int i = 0; i < n; i++) {
        cin >> s.x >> s.y >> s.z;
        arr[i] = s;
    }
    sort(arr, arr + n, cmp);
    double length = 0.0;
    for (int i = 1; i < n; i++) {
        double a = pw(arr[i].x - arr[i - 1].x);
        double b = pw(arr[i].y - arr[i - 1].y);
        double c = pw(arr[i].z - arr[i - 1].z);
        length += sqrt(a + b + c);
    }
    printf("%.3lf",length);
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