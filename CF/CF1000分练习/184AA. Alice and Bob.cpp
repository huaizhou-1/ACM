#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
int arr[N];
void solve() {
    int n = 0;
    int a = 0;
    cin >> n;
    cin >> a;
    int tmpa = a + 1;
    int tmpb = a - 1;
    int cnta = 0;
    int cntb = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        if (abs(tmpa - arr[i]) < abs(a - arr[i])) {
            cnta++;
        }
        if (abs(tmpb - arr[i]) < abs(a - arr[i])) {
            cntb++;
        }
    }
    if (cnta > cntb) {
        cout << tmpa << '\n';
    }
    else {
        cout << tmpb << '\n';
    }
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int _ = 1;
	cin >> _;
	while (_--) {
		solve();
	}
	return 0;
}