#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
	int n;
    cin >> n;
    vector<int> arr(n);
    ll cnt = 0;
    for (int i = 0; i < n; i ++) {  
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // cout << arr[i] << " " << arr[j] << '\n';
            if (arr[i] > arr[j] && arr[j] != -1) {
                cnt++;
                arr[j] = -1;
            }
        }
        // cout << '\n';
    }
    cout << cnt << '\n';
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