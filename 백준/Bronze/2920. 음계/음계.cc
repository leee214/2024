#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> mu(8);
	for (int i = 0; i < 8; i++) {
		cin >> mu[i];
	}

	int flag = 0;
	for (int i = 0; i < 8; i++) {
		if (mu[i] != i + 1) {
			break;
		}
		if (i == 7) {
			cout << "ascending\n";
			return 0;
		}
	}

	for (int i = 0; i < 8; i++) {
		if (mu[i] != 8 - i) {
			break;
		}
		if (i == 7) {
			cout << "descending\n";
			return 0;
		}
	}
	cout << "mixed\n";
	return 0;
}