#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
int arr[N];
void solve() {
	int n; cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
        int t = arr.size();
        if (t >= 4) {
            if (arr[t - 1] == arr[t - 2] && arr[t - 2] == arr[t - 3] && arr[t - 3] == arr[t - 4]) {
                for (int i = 0; i < 4; i++) {
                    arr.pop_back();
                }
            }
        }
    }
    cout << arr.size();
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