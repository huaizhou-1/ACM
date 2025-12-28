#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
int ans[N];
void solve() {
    stack<int> z;
    int n = 0;
    cin >> n;
    int arr[n + 5]; 
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++) {
        while (!z.empty() && arr[i] > arr[z.top()]) {
            ans[z.top()] = i;
            z.pop();
        }
        z.push(i);
    }
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
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