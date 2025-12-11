#include <bits/stdc++.h>
using namespace std;
int main() 
{

    int n = 0;
    cin >> n;
    int ans = 0;
    int a = 0;
    for (n;1; n /= 10) {
        a = n % 10;
        if (a % 2 == 0) {
            ans++;
        }
        if(n < 10) {
            break;
        }
    }
    cout << ans;
}