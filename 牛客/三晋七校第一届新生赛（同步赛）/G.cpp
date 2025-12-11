#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int i = 0;
    int j = n - 1;
    while (i < j) {
        // cout << arr[i] << " " << arr[j] << '\n';
        if ((arr[j] - arr[i]) % 2 != 0) {
            cout << "No\n";
            return;
        }
        i++;
        j--;
    }
    if (i == j )
    cout << "Yes\n";
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