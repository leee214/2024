#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
#include <deque>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	if (n == 0) {
		cout << "0\n";
		return 0;
	}
	vector<int> diffi(n);
	for (int i = 0; i < n; i++) {
		cin >> diffi[i];
	}
	sort(diffi.begin(), diffi.end());
	int rating = round((float)n * 0.15);
	int sum = 0;
	for (int i = rating; i < n - rating; i++) {
		sum += diffi[i];
	}
	int result = round((float)sum / (n - (2 * rating)));
	cout << result << "\n";
	return 0;
}