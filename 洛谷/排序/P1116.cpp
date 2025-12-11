#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    cin >> n;
    int ans = 0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> arr1(n); 
    arr1 = arr;
    sort(arr1.begin(), arr1.end());
    while (arr != arr1) {
        for (int i = 0; i < n - 1; i++) {
            int tmp = min(arr[i], arr[i + 1]);
            arr[i + 1] = max(arr[i], arr[i + 1]);
            if (arr[i] != tmp) {
                arr[i] = tmp;
                ans++;
            }
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