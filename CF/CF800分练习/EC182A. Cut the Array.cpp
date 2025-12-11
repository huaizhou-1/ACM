#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    cin >> n;
    vector<int> a(n + 1);
    vector<int> s(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        if(i == 0) {
            s[i] = a[i];
        }
        else {
            s[i] = s[i - 1] + a[i];
        }
    }
    int l = 0;
    int r = 0;
    for(int l = 1; l <= n; l++) {
        for(int r = l + 1; r <= n; r++) {
            int s1 = s[l] % 3;
            int s2 = (s[r] - s[l] + 3) % 3;
            int s3 = (s[n] - s[r] + 3) % 3;
            if((s1 == s2 && s2 == s3) || (s1 != s2 && s2 !=s3 && s1 !=s3)) {
                cout << l << " " << r << endl;
                return;
            }
        }
    }
    cout << 0 << " " << 0 << endl;
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