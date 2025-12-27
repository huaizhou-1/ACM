#include <bits/stdc++.h>
using namespace std;
const int N = 5e4 + 5, off = 3e6;
int n, arr[N], brr[N], a, b;
bool vis[int(6e6) + 5];

int main() {
    cin >> n;
    for (int x, y; n--;) {
        cin >> x >> y;
        if (y == 0) arr[a++] = x;
        if (y == 1) brr[b++] = x;
        if (y == 2) vis[x + off] = 1;
    }
    sort(arr, arr + a);
    sort(brr, brr + b);
    a = unique(arr, arr + a) - arr;
    b = unique(brr, brr + b) - brr;
    bool flag = 1;
    for (int j = 0; j < b; j++) {
        for (int i = 0; i < a; i++) {
            int x = 2 * brr[j] - arr[i];
            if (!vis[off + x]) continue;
            flag = 0;
            printf("[%d, 0] [%d, 1] [%d, 2]\n", arr[i], brr[j], x);
        }
    }
    if (flag) {
        cout << -1;
    }
    return 0;
}