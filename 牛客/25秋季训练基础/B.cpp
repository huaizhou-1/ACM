#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    int x = 0;
    int a = 0;
    int b = 0;
    cin >> n >> x >> a >> b;
    double t1 = n * a;
    double t2 = n * b;
    double ans = (t1 - t2) * x * 0.01;
    printf("%.2lf",t2 + ans);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int _ = 1;
	solve();
	return 0;
}