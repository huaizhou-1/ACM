#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;
bool cmp(int a, int b) {
    return a > b;
}
void solve() {
    int N = 0;
    int B = 0;
    cin >> N >> B;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + N, cmp);
    int ans = 0;
    int sum = 0;
    for (int i = 0; sum < B; i++) {
        sum += arr[i];
        ans++;
    }
    cout << ans;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}