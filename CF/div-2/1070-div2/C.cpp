#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
	int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> ji;
    vector<int> ou;
    int cntj = 0;
    int cnto = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 1) {
            ji.push_back(arr[i]);
        }
        if (arr[i] % 2 == 0) {
            ou.push_back(arr[i]);
        }   
    }
    sort(ji.begin(), ji.end());
    sort(ou.begin(), ou.end());
    ll ans = 0;
    vector<int> tmpji = ji;
    vector<int> tmpou = ou;
    int t = ou.size() + 1;
    if (ji.size() == 0) {
        for (int i = 0; i < n; i++) {
            cout << "0 ";
        }
        cout <<'\n';
        return;
    }
    // cout << t << '\n';
    vector<int> anss;
    for (int i = 1; i <= t; i++) {
        if (i == 1 && tmpji.size() > 0) {
            ans += tmpji[tmpji.size() - 1];
        }
        else {
            if (i % 2 == 0) {
                    
            }
        }
        anss.push_back(ans);
        cout << ans << " ";
    }
    ans = 0;
    if (ou.size() == 0) {
        for (int i = 2; i <= n; i++) {
            if (i % 2 == 0) {
                cout << "0 ";
            }
            else {
                cout << ji[ji.size() - 1] << " ";
            }
        }
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n - t; i++) {
       if (i % 2 == 1) {

       }
    }
    cout << '\n';
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