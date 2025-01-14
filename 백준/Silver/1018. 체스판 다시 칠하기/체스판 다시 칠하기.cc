#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;
	cin >> N >> M;
	vector<vector<char>> arr(N + 1, vector<char>(M + 1, 0));
	vector<vector<int>> arr2(N + 1, vector<int>(M + 1, 0));
	vector<vector<int>> arr3(N + 1, vector<int>(M + 1, 0));
	vector<vector<int>> sum_num2(N + 1, vector<int>(M + 1, 0));
	vector<vector<int>> sum_num3(N + 1, vector<int>(M + 1, 0));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> arr[i][j];
			if (i % 2 == 0 && j % 2 == 0 && arr[i][j] == 'B') {
				arr2[i][j] == 0;
			}
			else if (i % 2 == 1 && j % 2 == 1 && arr[i][j] == 'B') {
				arr2[i][j] == 0;
			}
			else if (i % 2 == 0 && j % 2 == 1 && arr[i][j] == 'W') {
				arr2[i][j] == 0;
			}
			else if (i % 2 == 1 && j % 2 == 0 && arr[i][j] == 'W') {
				arr2[i][j] == 0;
			}
			else {
				arr2[i][j] = 1;
			}

			if (i % 2 == 0 && j % 2 == 0 && arr[i][j] == 'W') {
				arr3[i][j] == 0;
			}
			else if (i % 2 == 1 && j % 2 == 1 && arr[i][j] == 'W') {
				arr3[i][j] == 0;
			}
			else if (i % 2 == 0 && j % 2 == 1 && arr[i][j] == 'B') {
				arr3[i][j] == 0;
			}
			else if (i % 2 == 1 && j % 2 == 0 && arr[i][j] == 'B') {
				arr3[i][j] == 0;
			}
			else {
				arr3[i][j] = 1;
			}

			if (j == 0) {
				sum_num2[i][j] = arr2[i][j];
				sum_num3[i][j] = arr3[i][j];
			}
			else {
				sum_num2[i][j] = sum_num2[i][j - 1] + arr2[i][j];
				sum_num3[i][j] = sum_num3[i][j - 1] + arr3[i][j];
			}
		}
	}
	int min = 32;
	for (int i = 7; i < N; i++) {
		for (int j = 7; j < M; j++) {
			int sum2 = 0, sum3 = 0;
			if (j == 7) {
				for (int k = i; k >= i - 7; k--) {
					sum2 += sum_num2[k][j];
					sum3 += sum_num3[k][j];
				}
			}
			else {
				for (int k = i; k >= i - 7; k--) {
					sum2 += sum_num2[k][j] - sum_num2[k][j - 8];
					sum3 += sum_num3[k][j] - sum_num3[k][j - 8];
				}
			}
			if (sum2 < min) {
				min = sum2;
			}
			if (sum3 < min) {
				min = sum3;
			}
		}
	}
	cout << min << "\n";
	return 0;
}