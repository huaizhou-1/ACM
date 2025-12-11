#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
struct qj {
    int l;
    int r;
};
bool cmpl (qj x, qj y) {
    if (x.l == y.l) return x.r < y.r;
    return x.l < y.l;
}
bool cmpr (qj x, qj y) {
    if (x.r == y.r) return x.l < y.l;
    return x.r < y.r;
}
void solve() {
    qj a;
    int n = 0;
    cin >> n;
    vector<qj> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].l >> arr[i].r;
    }
    qj tmp1[n];
    qj tmp2[n];
    sort(arr.begin(), arr.end(), cmpr);
    for (int i = 0; i < n; i++) {
        tmp1[i] = arr[i];
    }
    sort(arr.begin(), arr.end(), cmpl);
    for (int i = 0; i < n; i++) {
        tmp2[i] = arr[i];
        if (tmp2[i].l != tmp1[i].l || tmp2[i].r != tmp1[i].r) {
            cout << "No\n";
            return;
        }
    }
    int l1 = arr[0].l;
    int r1 = arr[0].r;
    int l2 = arr[n - 1].l;
    int r2 = arr[n - 1].r; 
    // cout << r1 << " " << l1 << '\n';
    if (r1 < l2) {
        cout << "No\n";
        return;
    }

    if(r2 < r1) {
        cout << "No\n";
        return;
    }
    cout << "Yes\n";
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