#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
int arr[26];
int brr[26];
void solve() {
	string a, b;
    int n, q;
    cin >> n >> q;
    cin >> a >> b;
    while (q--) {
        int l, r;
        cin >> l >> r;
        int cnt = 0 ;
        fill(arr, arr + 26, 0);
		fill(brr, brr + 26, 0);
        for (int i = l - 1; i < r; i++) {
            arr[a[i] - 'a']++;
			brr[b[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
			if (arr[i] != brr[i]) {
                int t = arr[i] - brr[i];
				if (t >= 0) {
                    cnt += t;
                }
                else {
                    cnt -= t;
                }
			}
		}
        cout << ceil(1.0 * cnt / 2) << '\n';
    }
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int _ = 1;
	cin >> _;
	while (_--) {
		solve();
	}
	return 0;
}