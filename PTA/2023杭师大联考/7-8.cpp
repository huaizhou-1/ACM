#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    cin >> n;
    char c[n];
    int flag = 0;
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        if (c[i] != 'C') {
            cout << c[i] << " ";
        }
        if (c[i] == 'C') {
            flag++;
        }
    }
    for (int i = 0; i < flag; i++) {
        cout << "A" << " ";
    }
    cout << endl;
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