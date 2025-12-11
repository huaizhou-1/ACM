#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;
void solve() {
    int n = 0;
    cin >> n;
    int a = 0;
    vector<int> arr1;
    vector<int> arr2;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a % 2 == 0) {
            arr2.push_back(a);
        }
        else {
            arr1.push_back(a);
        }
        arr[i] = a;
    }
    if (arr1.size() == 0) {
        for (int i = 0; i < arr2.size(); i++) {
            cout << arr2[i] << " ";
        } 
        cout << "\n";
        return;
    }
    if (arr2.size() == 0) {
        for (int i = 0; i < arr1.size(); i++) {
            cout << arr1[i] << " ";
        } 
        cout << "\n";
        return;
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return;
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