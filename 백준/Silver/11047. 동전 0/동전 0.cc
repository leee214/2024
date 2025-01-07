#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, K, tmp;
	int sum_coins = 0;
	cin >> N >> K;
	vector<int> coins(N);
	for (int i = 0; i < N; i++) {
		cin >> coins[i];
	}
	for (int i = N - 1; i > -1; i--) {
		if (K >= coins[i]) {
			tmp = 1;
			while (true) {
				if (K >= (tmp + 1) * coins[i]) {
					tmp++;
					continue;
				}
				sum_coins += tmp;
				K -= (coins[i] * tmp);
				break;
			}
		}
	}
	cout << sum_coins << "\n";
	return 0;
}