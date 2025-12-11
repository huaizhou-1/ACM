#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
int arr[N];
void solve() {
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    int i = 0;
    ll ans = 0;
    int flag = 2;
    while (i < n) {
        if (i + 2 == n) {
            ans += arr[n];
            break;
        }
        if (i + 1 == n) {
            ans += arr[n];
            break;
        }
        if (flag == 2) {
            ll tmpa = arr[i + 1];;
            ll tmpb = arr[i + 2];
            if (tmpa > tmpb) {
                ans += tmpa;
                i += 1;
                flag = 1;
            }
            else {
                ans += tmpb;
                i += 2;
            }
        }
        else {
            ans += arr[i + 2];
            i += 2;
            flag = 2;
        }
    }
    cout << ans;
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