#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

void quick_sort(int arr[], int l, int r) {
    if (l >= r) {
        return;
    }
    
    int x = arr[(l + r) / 2];
    int i = l - 1;
    int j = r + 1;
    while (i < j) {
        do {
            i++;
        } while (arr[i] < x);
        do {
            j--;
        } while (arr[j] > x);
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    quick_sort(arr, l, j);
    quick_sort(arr, j + 1, r);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n = 0;
    int arr[N];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quick_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
	return 0;
}
