#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
vector<ll> arr(N);
vector<ll> brr(N);
void solve() {
    int n = 0;
    cin >> n;
    int cnt = 1;
    for (int i = 1; i <= n; i++) {
        cin >> brr[i];
    }
    for (int i = 1; i <= n; i++) {
        ll la = i + brr[i - 1] - brr[i];       
        if (la == 0) {
            arr[i] = cnt;
            cnt++;
        }
        else {
            arr[i] = arr[la];
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << '\n';
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