#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
	int n;
    cin >> n;
    //vector<int> a(n + 5);
    priority_queue<double, vector<double>, greater<double>> q;
    for (int i = 1; i <= n; i++) {
        double a;
        cin >> a;
        q.push(a);
    }
    while (q.size() >= 2) {
        int x = q.top();
        q.pop();
        int y = q.top();
        q.pop();
        q.push(sqrtl(x * y));
    }
    printf("%.7lf\n", q.top());

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);wq
	int _ = 1;
	// cin >> _;
	while (_--) {
		solve();
	}
	return 0;
}