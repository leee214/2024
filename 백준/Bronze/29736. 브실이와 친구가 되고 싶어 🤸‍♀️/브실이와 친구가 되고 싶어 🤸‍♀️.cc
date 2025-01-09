#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int A, B, K, X;
	int num_sum = 0;
	cin >> A >> B;
	cin >> K >> X;
	for (int i = A; i <= B; i++) {
		if (i >= K - X && i <= K + X) {
			num_sum++;
		}
	}
	if (num_sum != 0) {
		cout << num_sum << "\n";
	}
	else {
		cout << "IMPOSSIBLE" "\n";
	}
	return 0;
}