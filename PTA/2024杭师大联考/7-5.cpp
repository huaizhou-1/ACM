#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int a = 0;
    int b = 0;
    cin >> a >> b;
    int ans = 0;
    for (int i = a; i <= b; i++) {
        int flag = 1;
        string s = to_string(i);
        for (int i = 0, j = s.size() - 1 ; i <= j; i++, j--) {
            // cout << s[i] << " " << s[j];
            if (s[i] != s[j]) {
                flag = 0;
                break;
            }
        }
        // cout << endl;
        if (flag == 1) {
            ans++;
        }
    }
    cout << ans;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
    // string s = to_string(121);
    // // cout << s.size();
    // int flag = 1;
    // int ans = 0;
    // for (int i = 0, j = s.size() - 1 ; i <= j; i++, j--) {
    //         cout << s[i] << " " << s[j] << endl;
    //         if (s[i] != s[j]) {
    //             flag = 0;
    //             break;
    //         }
    //     }
    //     if (flag == 1) {
    //         ans++;
    //     }
    // cout << ans;
	return 0;
}