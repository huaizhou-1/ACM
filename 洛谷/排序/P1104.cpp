#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;
struct xinxi {
    string name;
    int year;
    int month;
    int day;
    int shunxv;
};
bool cmp (xinxi a, xinxi b) {
    if (a.year == b.year) {
        if (a.month == b.month) {
            if (a.day == b.day) {
                return a.shunxv > b.shunxv;
            }
            return a.day < b.day;
        }
        return a.month < b.month;
    }
    return a.year < b.year;
}
void solve() {
    int n = 0;
    cin >> n;
    xinxi arr[n];
    xinxi a;
    for (int i = 0; i < n; i++) {
        cin >> a.name >> a.year >> a.month >> a.day;
        a.shunxv = i;
        arr[i] = a;
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << arr[i].name << endl;
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