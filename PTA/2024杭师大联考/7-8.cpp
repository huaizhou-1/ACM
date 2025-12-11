#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

bool cmp(int a, int b) {
    return a > b;
}
int su(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    if (n != 1)
    return 1;
    else
    return 0;
}
void solve() {
    int n = 0;
    cin >> n;
    int arr[n];
    int mxx = 0; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if(su(arr[i])) {
            cout << "QAQ";
            return;
        }
        mxx = max(mxx, arr[i]);
    }
    int mx = 0;
    for (int i = 1;i <= mxx;i++) {
        int flag = 0;
        for (int k = 0; k < n; k++) {
            if (arr[k] % i != 0) {
                flag = 1;
            }
        }
        if (flag == 0) {
            mx = max(mx, i);
        }
    }
   cout << mx;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int _ = 1;
	while (_--) {
		solve();
	}
	return 0;
}