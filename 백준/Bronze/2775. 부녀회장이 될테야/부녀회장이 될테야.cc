#include <iostream>
#include <vector>

using namespace std;

int main() {
	int T, k, n;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> k >> n;
		vector<vector<int>> room(k+1,vector<int>(n+2,0));
		for (int x = 0; x < k + 1; x++) {
			for (int y = 1; y < n + 1; y++) {
				if (x == 0) {
					room[x][y] = y;
					//cout << "room[x][y] is " << y << "\n";
				}
				else if (y == 1) {
					room[x][y] = 1;
				}
				else {
					room[x][y] = room[x][y - 1] + room[x - 1][y];
				}
			}
		}
		cout << room[k][n] << "\n";
	}
	return 0;
}