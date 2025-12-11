#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    cin >> n;
    int arr[n + 5];
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
        ans += arr[1];
        arr[2] = 0;
        arr[1] = 0;
        ans += arr[n];
        arr[n - 1] = 0;
        arr[n] = 0;
    for (int i = 1; i <= n; i++) {
        if (arr[i + 1] == 0) {
            ans += arr[i];
            arr[i] = 0;
        }
        if (arr[i] == 3) {
            ans += 3;
            arr[i] = 0;
            arr[i - 1] = 0;
            arr[i + 1] = 0;
        }
    }
    for (int i = 1; i <= n; i++) {
         if (arr[i + 1] == 0) {
            ans += arr[i];
            arr[i] = 0;
        }
        if (arr[i] == 2) {
            ans += 2;
            arr[i] = 0;
            arr[i - 1] = 0;
            arr[i + 1] = 0;
        }
    }
    for (int i = 1; i <= n; i++) {
         if (arr[i + 1] == 0) {
            ans += arr[i];
            arr[i] = 0;
        }
        if (arr[i] == 1) {
            ans += 1;
        }
    }
    cout << ans;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}