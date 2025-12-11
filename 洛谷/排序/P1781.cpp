#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;
struct mat {
    string s;
    int length;
    int hao;
};
bool cmp(mat s1, mat s2) {
    if (s1.length != s2.length)
    {
        return s1.length > s2.length;
    }
    else {
        for (int i = 0; i < s1.length; i++) {
            if(s1.s[i] != s2.s[i]) {
                return s1.s[i] > s2.s[i];
            }
        }
    }
}
void solve() {
    int n = 0;
    mat sa;
    cin >> n;
    mat arr[20];
    for (int i = 0; i < n; i++) {
        cin >> sa.s;
        sa.length = sa.s.size();
        sa.hao = i;
        arr[i] = sa;
    }
    sort(arr, arr + n, cmp);
    cout << arr[0].hao + 1 << endl << arr[0].s;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}