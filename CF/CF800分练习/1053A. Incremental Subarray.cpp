#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() { 
    int n = 0;
    int m = 0;
    cin >> n >> m;
    vector<int> arr(m+5);
    for(int i = 0; i < m; i++) {
         cin >> arr[i];
    }
    int flag = -1;
    for(int i = 0;i < m; i++) {
        if(arr[i] == 1) {
            flag = i;
        }
    }
    if(flag == -1 || flag == 0) {
        cout << n - arr[m - 1] + 1 << endl;
    }
    else {
        cout << 1 << endl;
    }
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
