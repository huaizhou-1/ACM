#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
bool brr[1000];
void solve() {
	int n, m;
    cin >> n >> m;
    int k = 0;
    cin >> k;
    ll arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    while (k--) {
        int mi = 0;
        int mj = 0;
        ll mx = LLONG_MIN;;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[i][j] > mx) {
                    mi = i;
                    mj = j;
                    mx = arr[i][j];
                }
            }
        }
        for (int i = 0; i < m; i++) {
            arr[mi][i] = LLONG_MIN;
        }
        for (int i = 0; i < n; i++) {
            arr[i][mj] = LLONG_MIN;
        }
        brr[mi] = true;
    }
    
    int flagb = 1;
    for (int i = 0; i < n; i++) {
        int flaga = 1;
        for (int j = 0; j < m; j++) {
            if (arr[i][j] != LLONG_MIN) {
               if (flaga == 1) {
                    cout << arr[i][j]; 
                    flaga = 0;
                }
                else {
                    cout << " " << arr[i][j];
                }
            }   
        }
        if (brr[i] == false) {
            cout << '\n';
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