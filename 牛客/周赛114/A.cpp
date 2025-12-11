#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    int arr[3];
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
        if (arr[i] == 1) cout << i + 1 << " ";
    }
    for (int i = 0; i < 3; i++) {
        if (arr[i] == 2) cout << i + 1 << " ";
    }
    for (int i = 0; i < 3; i++) {
        if (arr[i] == 3) cout << i + 1 << " ";
    }
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
