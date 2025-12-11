#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
struct qj {
    int l = 0;
    int r = 0;
    int xvhao = 0;
};

bool cmp (qj x, qj y) {
    return x.r < y.r;
}

void solve() {
    int n = 0;
    int q = 0;
    cin >> n >> q;  
    vector<qj> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].l >> arr[i].r;
        arr[i].xvhao = i;
    }
    sort (arr.begin(), arr.end(), cmp);\

    auto check = [&](int md, int x) -> int {
        int ll = arr[md].l;
        int rr = arr[md].r;

        if(x >= ll && x <= rr) {
            return 1;
        }

        if(rr < x) {    
            return -1;
        }
        return -2;
    };

    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        int ans = -1;
        while(l <= r) {
            int mid = l + r >> 1;
            int qq = check(mid, x);
            if(qq == 1) {
                ans = mid;
                break;
            }
            else if(qq == -1) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
        if(ans == -1) {
            cout << "-1\n";
        }
        else {
            cout << arr[ans].xvhao + 1 << "\n";
        }
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