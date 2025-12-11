#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
	int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    map<int, bool> mp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]] = true;
    }
    sort(arr.begin(), arr.end());
    map<int, bool> mpp;
    vector<int> brr;
    for (int i = 0; i < n; i++) {
        // cout << arr[i] << " ";
        if (!mpp[arr[i]]) {
            int t = arr[i];
            brr.push_back(t);
            while (t <= k) {
                mpp[t] = true;
                if (!mp[t]) {
                    cout << "-1\n";
                    return;
                }
                t += arr[i];
            }
        }
    }
    if (brr.size() == 0) {
        cout << "-1\n";
        return;
    }
    cout << brr.size() << "\n";
    for (int i = 0; i < brr.size(); i++) {
        cout << brr[i] << " ";
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