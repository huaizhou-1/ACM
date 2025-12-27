    #include<bits/stdc++.h>
    using namespace std;
    using ll = long long;
    const int N = 1e7 + 9;
    const int mod = 1e9 + 7;

    void solve() {
        int n;
        cin >> n;
        int arr[n + 1];
        int mn = int(1e10);
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }
        ll cnt = 0;
        for (int i = n; i > 0; i--) {
            if (mn >= arr[i]) {
                mn = arr[i];
            }
            else {
                cnt++;
            }
        }
        cout << cnt << '\n';
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