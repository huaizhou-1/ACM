#include <bits/stdc++.h>
using namespace std;

struct zb {
    int x;
    int y;
};

long long distance (int x1, int x2, int y1, int y2) {
    long long d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    return d;
}
void solve() {
    int n = 0;
    cin >> n;
    zb arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i].x >> arr[i].y;
    }
    long long sum = 0;
    int x1, y1, x2, y2;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long a = distance(arr[i].x, arr[j].x, arr[i].y, arr[j].y);
            if (a > sum) {
                sum = a;
                x1 = arr[i].x;
                y1 = arr[i].y;
                x2 = arr[j].x;
                y2 = arr[j].y;
            }
        }
    }
    cout << x1 << " " << y1 << " " << x2 << " " << y2;
    return;
}
int main() {
    int _ = 1;
    while (_--) {
        solve();
    }
    return 0;
}