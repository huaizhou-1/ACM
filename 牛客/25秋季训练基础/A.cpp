#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 1; i <= n - 1; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for(int i = 1; i < n; i++) {
        if(arr[i] != i) {
            cout << i;
            return;
        }
    }
    return;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int _ = 1;
		solve();
	return 0;
}