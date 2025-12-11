#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
vector<int> arr;

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a = 0;
        cin >> a;
        arr.push_back(a);
    }
    ll ans = 0;
    ll cnt = 0;
    int a = arr.size() - 1;
    int cntt = 1;
    sort(arr.begin(), arr.end());
    while (arr[a] - cnt > 0) {
        a = arr.size() - 1;
        ans += arr[a] - cnt;
        cnt++;
        arr.pop_back();
        a = arr.size() - 1;
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