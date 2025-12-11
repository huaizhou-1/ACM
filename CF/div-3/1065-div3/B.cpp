#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
int arr[N];
void solve() {
    int n = 0;
    ll sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    if (arr[1] == -1 && arr[n] != -1) {
        arr[1] = arr[n];
    }
    else if (arr[n] == -1 && arr[1] != -1) {
        arr[n] = arr[1];
    }
    else if (arr[n] == -1 && arr[1] == -1) {
        arr[n] = arr[1] = 0;
    }
    for (int i = 2; i <= n; i++) {
        if (arr[i] == -1) {
            arr[i] = 0;
        }
        sum += arr[i] - arr[i - 1];
    }
    cout << abs(sum) << '\n';
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