#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;
int n = 0;
int p = 0;

struct sb {
	int a;
	int b;
};

sb arr[N];

bool check(double mid) {
	double sum = 0;
	double a = mid * p;
	for (int i = 0; i < n; i++) {
		if (arr[i].a * mid > arr[i].b) {
			sum += (arr[i].a * mid) - arr[i].b;
		}
		if (sum > a) {return false;}
	}	
	if (sum <= a) {return true;}
}

void solve() {
	cin >> n >> p;
	double suma = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i].a >> arr[i].b;
		suma += arr[i].a;
	}
	if(suma <= p){
		cout<<-1;
		return;
	}
	double l = 0.0;
	double r = 1e12;
	while (r - l > 1e-6) {
		double mid = l + (r - l) / 2.0;
		if (check(mid)) {l = mid;}
		else {r = mid;}
	}
	cout << l;
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