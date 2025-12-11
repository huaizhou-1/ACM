#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

struct team {
    int shu;
    int time;
    int xvhao;
};
bool cmp (team x, team y) {
    if (x.shu == y.shu) {
       return x.time <= y.time;
    }
    else {
        return x.shu > y.shu;
    }
}
void solve() {
    int n = 0;
    cin >> n;
    team arr[n];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i].shu >> arr[i].time;
        arr[i].xvhao = i;
    }
    sort(arr, arr + n + 1, cmp);
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
       if (arr[i].xvhao == 1) {
            cnt = i;
       }
    }
    if (cnt <= n * 0.1) {
        cout << "gold";
    }
    else if (cnt <= n * 0.3 && cnt > n * 0.1) {
        cout << "silver";
    }
    else if (cnt <= n * 0.6 && cnt > n * 0.3) {
        cout << "bronze";
    }
    else {
        cout << "iron";
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