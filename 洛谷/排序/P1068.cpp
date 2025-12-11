#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;
struct grade {
    int hao;
    int fen;
};
bool cmp (grade a, grade b) {
    if (a.fen == b.fen) {
        return a.hao < b.hao;
    }
    else {
        return a.fen > b.fen;
    }
}
void solve() {
    int n = 0;
    int m = 0;
    cin >> n >> m;
    int line = (int)(m * 1.5 - 0.5);
    grade s;
    grade arr[n];
    for (int i = 0; i < n; i++) {
        cin >> s.hao >> s.fen;
        arr[i] = s;
    }
    sort(arr, arr + n, cmp);
    line = arr[line - 1].fen;
    int flag = n;
    for (int i = 0; i < n; i++) {
        if (arr[i].fen < line) {
            flag = i;
            break;
        }
    }
    cout << line << " " << flag << endl;
    for (int i = 0; i < flag; i++) {
        cout << arr[i].hao << " " << arr[i].fen << endl;
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