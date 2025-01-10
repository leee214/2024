#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, max = -1000000, min = 1000000;
	cin >> N;
	vector<int> str(N);
	for (int i = 0; i < N; i++) {
		cin >> str[i];
	}
	for (int i = 0; i < N; i++) {
		if (str[i] > max) {
			max = str[i];
		}

		if (str[i] < min) {
			min = str[i];
		}
	}
	cout << min << " " << max << "\n";
	return 0;
}