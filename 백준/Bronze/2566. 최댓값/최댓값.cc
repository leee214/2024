#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<vector<int>> num(10, vector<int>(10, 0));
	int row, col, max = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> num[i][j];
			if (num[i][j] >= max) {
				max = num[i][j];
				row = i + 1;
				col = j + 1;
			}
		}
	}
	cout << max << "\n";
	cout << row << " " << col << "\n";
	return 0;
}