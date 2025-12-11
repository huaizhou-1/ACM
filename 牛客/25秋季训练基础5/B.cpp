#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
bool cmp(int x, int y) {
    return x >= y;
}
void solve() {
    int n, m;
    cin >> n >> m;
    int arr[n];
    double I = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i == 8) {
            I = arr[i];
            if (I >= m * 0.8) {
                cout << "Yes";
                return;
            }
        }
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i <= 2; i++) {
        if (arr[i] == I) {
            cout << "Yes";
            return;
        }
    }
    cout << "No";
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