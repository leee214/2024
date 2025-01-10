#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> str(9);
	for (int i = 0; i < 9; i++) {
		cin >> str[i];
	}
	int max = 0, num = 0;
	for (int i = 0; i < 9; i++) {
		if (str[i] > max) {
			num = i + 1;
			max = str[i];
		}
	}
	cout << max << "\n" << num << "\n";
	return 0;
}