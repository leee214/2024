#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
#include <deque>
#include <cmath>
#include <map>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, inp;
	cin >> n;
	vector<ll> sum(301);
	vector<ll> num(301);
	for (int i = 1; i < n + 1; i++) {
		cin >> num[i];
	}
	sum[1] = num[1];
	if (n == 1) {
		cout << sum[1] << "\n";
		return 0;
	}
	sum[2] = sum[1] + num[2];
	if (n == 2) {
		cout << sum[2] << "\n";
		return 0;
	}
	if (num[1] + num[3] > num[2] + num[3]) {
		sum[3] = num[1] + num[3];
	}
	else {
		sum[3] = num[2] + num[3];
	}
	if (n == 3) {
		cout << sum[3] << "\n";
		return 0;
	}
	for (int i = 4; i < n + 1; i++) {
		if (sum[i - 2] + num[i] > sum[i - 3] + num[i-1] + num[i]) {
			sum[i] = sum[i - 2] + num[i];
		}
		else {
			sum[i] = sum[i - 3] + num[i - 1] + num[i];
		}
	}
	cout << sum[n] << "\n";
	return 0;
}