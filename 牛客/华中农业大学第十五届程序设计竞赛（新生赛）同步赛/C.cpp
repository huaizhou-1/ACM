#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n + 5);
    vector<int> brr(n + 5);
    stack<int> r;
    stack<int> l;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int j = n; j >= 1; j--) {
        while (!r.empty() && arr[r.top()] < arr[j]) {
            r.pop();
        }  
        r.push(j);   
        brr[j] += r.size();
    }
    for (int j = 1; j <= n; j++) {
        while (!l.empty() && arr[l.top()] < arr[j]) {
            l.pop();
        }
        l.push(j);
        brr[j] += l.size();
    }
    for (int i = 1; i <= n; i++) {
        cout << brr[i] - 1 << " ";
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