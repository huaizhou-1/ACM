#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    int arr[101];
    map<int, int> p;
    int n = 0;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        p[arr[i]]++;
    }
    for (auto i = p.begin(); i != p.end(); i++) {
        if (i -> second > i -> first) {
            cnt += i -> second - i -> first;
        }
        else if (i -> second < i -> first) {
            cnt += i -> second;
        }
    }
    cout << cnt << '\n';
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