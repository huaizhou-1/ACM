#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const int mod = 1e9 + 7;

struct grade {
    int Chinese;
    int math;
    int English;
    int xuehao;
    int zf;
};

bool cmp(grade s1, grade s2) {
    if (s1.zf != s2.zf) {
        return s1.zf > s2.zf;
    }
    else {
        if (s1.Chinese != s2.Chinese) {
            return s1.Chinese > s2.Chinese;
        }
        else {
            if (s1.math != s2.math) {
                return s1.math > s2.math;
            }
            else {
                return s1.English > s2.English;
            }
        }
    }
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n = 0;
    cin >> n;
    grade a;
    grade arr[305];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a.Chinese >> a.English >> a.math;
        a.xuehao = i + 1;
        sum = a.Chinese + a.English + a.math;
        a.zf = sum;
        arr[i] = a;
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < 5; i++) {
        cout << arr[i].xuehao << " " << arr[i].zf << endl;
    }
	return 0;
}