#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	int sum = 1;
	if (N == 1) {
		cout << "1\n";
		return 0;
	}
	int i = 1;
	while (true) {
		sum += (i * 6);
		if (N <= sum) {
			cout << i + 1 << "\n";
			break;
		}
		i++;
	}
	return 0;
}