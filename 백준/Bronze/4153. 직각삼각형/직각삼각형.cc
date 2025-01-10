#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	while (true) {
		vector<int> str(3);
		cin >> str[0] >> str[1] >> str[2];
		sort(str.begin(), str.end());
		if (str[2] == 0) {
			break;
		}
		if (pow(str[2], 2) == pow(str[0], 2) + pow(str[1], 2)) {
			cout << "right\n";
		}
		else {
			cout << "wrong\n";
		}
	}
	return 0;
}