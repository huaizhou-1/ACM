#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2) {
        cout << x1 + 1 << " " << y1 << " " << x1 + 1 << " " << y2;
        return;
    }
    else if (y1 == y2) {
        cout << x1 << " " << y1 + 1 << " " << x2 << " " << y1 + 1; 
    }
    else {
        cout << x1 << " " << y2 << " " << x2 << " " << y1;
    }
    
    
}
int main() {
    int _ = 1;
    while (_--) {
        solve();
    }
    return 0;
}