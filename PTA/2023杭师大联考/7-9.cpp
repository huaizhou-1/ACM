#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void solve() {
    int n = 0;
    cin >> n;
    int konggeshu = n - 2;
    for (int i = 0; i < n * 3; i++) {
        cout << "*";
    }
    for (int i = 0; i < n; i++) {
        cout << " ";
    }
    for (int i = 0; i < n * 3; i++) {
        cout << "*";
    }
    cout << endl;
    for (int i = 0; i < n - 1; i++) {
        int ss = 1;
        int b = 0;
        for (int f = 0; f <= i; f++) {
            cout << " ";
            ss++;
        }
        cout << "*";
        if (konggeshu >= 2){
            for (int k = 0; k < n * 3 - ss; k++) {
            cout << " ";
            b++;
            }
            for (int kk = 0; kk < i; kk++) {
            cout << " ";
            }
            cout << "*";
            for (int p = 0; p < (n - 2) - 2 * i; p++) {
                cout << " ";
            }
            cout << "*";
            konggeshu -= 2;
            for (int kk = 0; kk < i; kk++) {
            cout << " ";
            }
            for (int k = 0; k < n * 3 - ss; k++) {
            cout << " ";
            b++;
            }
            cout << "*";
        }
        else if (konggeshu < 2) {
            for (int kk = 0; kk < n * 6 - 2 * ss + n; kk++) {
                cout << " "; 
            }
            cout << "*";
        } 
        cout << endl;
    }
    int kg = 2;
    for (int i = n - 2; i > 0; i--) {
        for (int k = 0; k < i; k++) {
            cout << " ";
        }
        cout << "*";
        if (i > (n - 2) / 2) {
            for (int kk = 0; kk < n * 6 + n - i * 2 - 2 ; kk++) {
                cout << " ";
            }
            cout << "*";
        }
        else {
            for (int kk = 0; kk < n * 3 - i - 1; kk++) {
                cout << " ";
            }
            for (int ks = 0; ks < i - 1; ks++) {
                cout << " ";
            }
            cout << "*";
            for (int sd = 0; sd < kg; sd++) {
                cout << " ";
            }
            kg += 2;
            cout << "*";
            for (int ks = 0; ks < i - 1; ks++) {
                cout << " ";
            }
            for (int kk = 0; kk < n * 3 - i - 1; kk++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    } 
    for (int i = 0; i < n * 3; i++) {
        cout << "*";
    }
    for (int i = 0; i < n; i++) {
        cout << " ";
    }
    for (int i = 0; i < n * 3; i++) {
        cout << "*";
    }
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