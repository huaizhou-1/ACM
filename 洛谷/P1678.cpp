#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
int m = 0;
int n = 0;   

int be_search (vector<int> arr, int x) {
    int i = 0;
    int j = m - 1;
    while (i < j) {
        int mid = i + (j - i) / 2;
        if(arr[mid] >= x) {j = mid;}
        else {i = mid + 1;}
    }
    // cout << abs(arr[i] - x) << " ";
    int a = abs(arr[i] - x);
    i = 0;
    j = m - 1;
    while (i < j) {
        int mid = i + (j - i + 1) / 2;
        if(arr[mid] <= x) {i = mid;}
        else {j = mid - 1;}
    }
    int b = abs(arr[i] - x);
    return min(a, b);
}
void solve() {
    cin >> m >> n;
    vector<int> school;
    vector<int> student;
    for (int i = 0; i < m; i++) {
        int temp = 0;
        cin >> temp;
        school.push_back(temp);
    }
    sort(school.begin(), school.end());
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        int temp = 0;
        cin >> temp;
        ans += be_search(school, temp);
    }
    cout << ans;
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