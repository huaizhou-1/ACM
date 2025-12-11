#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    cin >> n;
    vector<int> arr(n);
    int j = 0;
    int flag = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if(n == arr[i]) {
            j = i;
        }
    }
    int i = j;
    for (int k = 0; k < n - 1; k++) {
        if (arr[j] - 1 == arr[j - 1]) {
            arr[j]--; 
            arr[i] = arr[j];
            j--;
        }
        else if (arr[i] - 1 == arr[i + 1]) {
            arr[i]--; 
            arr[j] = arr[i];
            i++;
        }
        // cout << "j = " << j << " ";
        // cout << "i = " << i << endl;
    }
    if (arr[0] == 1 && arr[n - 1] == 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
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