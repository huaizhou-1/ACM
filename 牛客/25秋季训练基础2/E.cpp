#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int aaa(int num) {
    int sqrtNum = (int)sqrt(num); // 计算平方根并取整
    return (sqrtNum * sqrtNum == num); // 判断平方根的平方是否等于原数
}

void solve() {
    int n = 0;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        for (int j = 1; j <= i; j++) {
            if (j == i) {ans += 1;}
            else if ((i * i) % j == 0) {
                ans += 2;
            }
        }
    }
    cout << ans;
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