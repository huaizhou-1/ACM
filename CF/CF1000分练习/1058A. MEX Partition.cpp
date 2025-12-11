#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e2 + 9;
const int mod = 1e9 + 7;
int arr[N];
int brr[N];
void solve() {
    fill(brr, brr  + 105, 0);
    fill(arr,arr  + 105, 0);
    int n = 0;
    cin >> n;
    int flag = 1;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 0) {
            flag = 0;
        }
        brr[arr[i]] += 1;
        // cout << brr[arr[i]] << " " << brr[0];
    }
    // if (flag) {
    //     cout << "0\n";
    //     return;
    // }
    for (int i = 0; i <= n; i++) {
        // cout << brr[i];
        if (brr[i] == 0) {
            cout << i << '\n';
            return;
        }
    }
    // cout << "1\n";
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