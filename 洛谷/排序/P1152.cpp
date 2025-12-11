#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int c[n];
    for (int i = 0; i < n - 1; i++) {
        c[i] = abs(arr[i] - arr[i + 1]);
    }
    int flag = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (c[j] == i) {
                flag++;
                continue;
            }
        }
    }
    if (flag == n - 1) {
        cout << "Jolly";
    }
    else {
        cout << "Not jolly";
    }
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