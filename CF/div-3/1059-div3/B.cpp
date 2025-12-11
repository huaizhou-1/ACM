#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

int huiwen(string s, int n) {
    for (int i = 0, j = n; i <= j; i++, j--) {
        if(s[i] != s[j]) {
            return 0;
        }
    }
    return 1;
}
void solve() {
    int n = 0;
    string s = "";
    cin >> n >> s;
    if (huiwen(s, n - 1)) {
        cout << 0 << endl << endl;
        return;
    }
    int sum = 0;
    int arr[20];
    int k = 0;
    for (int i = 0; i <= n; i++) {
        if (s [i] == '0') {
            sum++;
            arr[k] = i + 1;
            k++;
        }
    }
    cout << sum <<endl;
    for (int i = 0; i < sum; i++) {
        cout << arr[i] << " ";
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