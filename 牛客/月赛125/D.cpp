#include<bits/stdc++.h>
#define int long long
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    auto check = [&](int x) -> bool {
        while (x) {
            if (x % 10 != 9) return 0;
            x /= 10;
        }
        return 1;
    };
    if (check(n)) {
        cout << "0\n";
        return ;
    }
    int y = 9;
    while (y < n) {
        y *= 10;
        y += 9;
    }
    int yy = y / 9;
    int num = yy - n;
    if (num == 0) {
        cout << "1\n";
        return ;
    }
    if (num < 0) {
        int res = 1e18;
        if ((y - n) % 9 == 0) {
            res = (y - n) / 9;
        } 
        y *= 10;
        y += 9;
        int yy = y / 9;
        int num = yy - n;
        int ans = 1;
        ans += num / 9;
        int tmp = num % 9;
        n = n + num - tmp;
        n *= 9;
        ans += (yy * 9 - n) / 9;
        cout << min(ans, res) << "\n";
        return ;
    }
    int ans = 1;
    ans += num / 9;
    int tmp = num % 9;
    n = n + num - tmp;
    n *= 9;
    ans += (yy * 9 - n) / 9;
    cout << ans << "\n";

    // int y = 1;
    // while (y < n) {
    //     y *= 10;
    //     y++;
    // }
    // if (y == n) {
    //     cout << "1\n";
    //     return ;
    // }
    // int num = y - n;
    // int ans = 0;
    // ans += num / 9;
    // int tmp = num % 9;


    // n = n + num - tmp;
    // n *= 9;
    // ans += (y * 9 - n) / 9;
    // cout << ans << "\n";
    

}

signed main()
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