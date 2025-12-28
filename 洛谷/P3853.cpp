#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
int L = 0;
int n = 0;
int K = 0;
int arr[N];
bool check(int mid) {
    int cnt = 0;
    int tmp = arr[0];
    for (int i = 1; i < n; i++) {
        while (arr[i] - tmp > mid) {
            cnt++;
            tmp += mid;
            if (cnt > K) {
                return false;
            }
        }
        if (cnt > K) {
            return false;
        }
        tmp = arr[i];
    }
    if (cnt <= K) {return true;}
    else {return false;}
}
void solve() {
    cin >> L >> n >> K;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int l = 0;
    int r = 1e7 + 5;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (check(mid)) {r = mid - 1;}
        else {l = mid + 1;}
    }
    cout << l;
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