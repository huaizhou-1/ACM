#include <bits/stdc++.h>
using namespace std;
using ll = long long;
long long n, a, b, p[15] {1};
bool flag = 1;

void dfs(ll x, int i) {
    if (i > n) {
        if (a <= x && x <= b) {
            cout << x << '\n';
            flag = 0;
        }
        return;
    }
    while (x <= b) {
        if (x / p[n - i] % i == 0) {
            dfs(x, i + 1);
        }
        if (x / p[n - i] % 10 == 9) {
            break;
        }
        x += p[n - i];
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin >> n >> a >> b;
    for (int i = 1; i < 15; i++) {
        p[i] = p[i - 1] * 10;
    }
    dfs(p[n - 1], 1);
    if (flag) cout << "No Solution";
    return 0;
}