#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
const int mod = 1e9 + 7;

void solve() {
	string a;
	string b;
	cin >> a >> b;
	int flaga = 0;
	int flagb = 0;
	vector<char> aa;
	vector<char> bb;
	vector<char> ax;
	vector<char> bx;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == '.') {
			flaga = 1;
		}
		if (flaga == 0) {
			aa.push_back(a[i]);
		}
		if (flaga == 1 && a[i] != '.') {
			ax.push_back(a[i]);
		}
	}
	for (int i = 0; i < b.size(); i++) {
		if (b[i] == '.') {
			flagb = 1;
		}
		if (flagb == 0) {
			bb.push_back(b[i]);
		}
		if (flagb == 1 && b[i] != '.') {
			bx.push_back(b[i]);
		}
	}
	if (flaga == 0 || flagb == 0) {
		cout << "ni shi dui de";
		return;
	}
	//整数部分比较
	int flagaaaaa = 0;
	for (int i = 0; i < max(aa.size(), bb.size()); i++) {
		if (aa[i] != bb[i]) {
			flagaaaaa = 1;
			cout << "ni shi dui de";
			return;
		}
	}
	//小数部分比较
	//以王国比大小方式判断
	string wangguoxiaoshu = "";
	string yuanbenxiaoshu = "";
	vector<char> tmpax = ax;
	vector<char> tmpbx = bx;
	reverse(ax.begin(), ax.end());
	reverse(bx.begin(), bx.end());
	for (int i = ax.size() - 1; i >= 0; i--) {
		if (ax[i] == '0') {
			ax.pop_back();
		}
		if (ax[i] != '0') {
			break;
		}
	}
	for (int i = bx.size() - 1; i >= 0; i--) {
		if (bx[i] == '0') {
			bx.pop_back();
		}
		if (bx[i] != '0') {
			break;
		}
	}
	reverse(ax.begin(), ax.end());
	reverse(bx.begin(), bx.end());
	// for (int i = 0; i < ax.size(); i++) {
	// 	cout << ax[i] << " ";
	// }
	// for (int i = 0; i < bx.size(); i++) {
	// 	cout << bx[i] << " ";
	// }
	if (ax.size() > bx.size()) {
		wangguoxiaoshu = "a > b";
	}
	if (ax.size() < bx.size()) {
		wangguoxiaoshu = "a < b";
	}
	// cout << ax.size() << " " << bx.size();
	if (ax.size() == bx.size()) {
		int flagd = 0;
		for (int i = 0; i < ax.size(); i++) {
			// cout << ax[i] << " " << bx[i] << '\n';
			if (ax[i] - '0' > bx[i] - '0') {
				wangguoxiaoshu = "a > b";
				flagd = 1;
				break;
			}
			if (ax[i] - '0' < bx[i] - '0') {
				wangguoxiaoshu = "a < b";
				flagd = 1;
				break;
			}
		}
		if (flagd == 0) {
			wangguoxiaoshu = "a = b";
			// cout << 1;
		}
		// cout << wangguoxiaoshu;
	}
	//以原本比大小方式判断
	ax = tmpax;
	bx = tmpbx;
	if (ax.size() == bx.size()) {
		int flagdd = 0;
		for (int i = 0; i < ax.size(); i++) {
			if (ax[i] - '0' > bx[i] - '0') {
				yuanbenxiaoshu = "a > b";
				flagdd = 1;
				break;
			}
			if (ax[i] - '0' < bx[i] - '0') {
				yuanbenxiaoshu = "a < b";
				flagdd = 1;
				break;
			}
		}
		if (flagdd == 0) {
			yuanbenxiaoshu = "a = b";
		}
	}
	if (ax.size() != bx.size()) {
		for (int i = ax.size() - 1; i >= 0; i--) {
			if (ax[i] == '0') {
				ax.pop_back();
			}
			if (ax[i] != '0') {
				break;
			}
		}
		for (int i = bx.size() - 1; i >= 0; i--) {
			if (bx[i] == '0') {
				bx.pop_back();
			}
			if (bx[i] != '0') {
				break;
			}
		}
		int flagddd = 0;
		for (int i = 0; i < min(ax.size(), bx.size()); i++) {
			if (ax[i] - '0' > bx[i] - '0') {
				yuanbenxiaoshu = "a > b";
				flagddd = 1;
				break;
			}
			if (ax[i] - '0' < bx[i] - '0') {
				yuanbenxiaoshu = "a < b";
				flagddd = 1;
				break;
			}
		}
		if (flagddd == 0) {
			if (ax.size() > bx.size()) {
				yuanbenxiaoshu = "a > b";
			}
			if (ax.size() < bx.size()) {
				yuanbenxiaoshu = "a < b";
			}
		}
	}
	//检查部分
	// cout << wangguoxiaoshu << " " << yuanbenxiaoshu;
	if (wangguoxiaoshu == "a > b" && yuanbenxiaoshu != "a > b") {
		cout << "ni cuo le, ying gai shi >";
		return;
	}
	if (wangguoxiaoshu == "a = b" && yuanbenxiaoshu != "a = b") {
		cout << "ni cuo le, ying gai shi =";
		return;
	}
	if (wangguoxiaoshu == "a < b" && yuanbenxiaoshu != "a < b") {
		cout << "ni cuo le, ying gai shi <";
		return;
	}
	if (wangguoxiaoshu == "a = b" && yuanbenxiaoshu == "a = b") {
		cout << "ni shi dui de";
		return;
	}
	if (wangguoxiaoshu == "a > b" && yuanbenxiaoshu == "a > b") {
		cout << "ni shi dui de";
		return;
	}
	if (wangguoxiaoshu == "a < b" && yuanbenxiaoshu == "a < b") {
		cout << "ni shi dui de";
		return;
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