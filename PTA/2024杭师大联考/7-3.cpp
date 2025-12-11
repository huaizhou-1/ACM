#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int a = 0;
    int b = 0;
    char c;
    cin >> a >> b >> c;
    if (c == '+') {
        cout << a + b;
    }
    if (c == '-') {
        cout << a - b;
    }
    if (c == '*') {
        cout << a * b;
    }
    if (c == '/') {
        if (b == 0) cout << "NaN";
        else cout << a / b;
    }
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}