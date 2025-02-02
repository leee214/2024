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
	int T;
	cin >> T;
	vector<int> arr(11);
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 4;
	for (int i = 3; i < 11; i++) {
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
	}
	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;
		cout << arr[n - 1] << "\n";
	}
	return 0;
}