#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n = 0;
    cin >> n;
    set<int> s;
    int a = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        s.insert(a);
    }
    cout << s.size() << endl;
    for (auto i = s.begin(); i != s.end(); i++) {
        cout << *i << " ";
    }
	return 0;
}