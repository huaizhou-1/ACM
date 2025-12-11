#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
int arr[N];
int n = 0;
int m = 0;

bool check(ll mid) {
    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum >= mid) {
            if (sum > mid) {i--;}
            sum = 0;
            cnt++;
            if (i == n - 1) {
                cnt--;
            }
        }
        if (cnt > m) {
            return false;
        }
    }
    cnt++;
    if (cnt <= m) {
        return true;
    }
    else {
        return false;
    }
}

void solve() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int l = 0;
    int r = 1e9 + 5;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (check(mid)) {r = mid - 1;}
        else {l = mid + 1;}
    }
    cout << l;
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