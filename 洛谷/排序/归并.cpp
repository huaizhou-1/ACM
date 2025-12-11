#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;
int arr[N];
int tmp[N];
void merge_sort(int arr[], int l, int r) {
    if (l >= r) {
        return;
    }
    
    int mid = (l + r) / 2;
    
    merge_sort(arr, l, mid);
    merge_sort(arr, mid + 1, r);
    
    int i = l;
    int j = mid + 1;
    int k = 0;
    while (i <= mid && j <= r) {
        if (arr[i] <= arr[j]) {
            tmp[k++] = arr[i++];
        }
        else {
            tmp[k++] = arr[j++];
        }
    }
    while (i <= mid) {
        tmp[k++] = arr[i++];
    }
    while (j <= r) {
        tmp[k++] = arr[j++];
    }
    for (i = l, j = 0; i <= r; i++, j++) {
        arr[i] = tmp[j];
    }
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    merge_sort(arr, 0, n-1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
	return 0;
}