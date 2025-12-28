#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6 + 9;
const int mod = 1e9 + 7;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n = 0;
    cin >> n;
    vector<int> arr(n + 5);
    int k = 0;
    cin >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.begin() + n);
    cout << arr[k];
	return 0;
}