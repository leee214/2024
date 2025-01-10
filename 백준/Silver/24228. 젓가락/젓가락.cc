#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	long long N, R;
	cin >> N >> R;
	if (N == 1) {
		cout << 2 * R << "\n";
	}
	else if (R == 1) {
		cout << N + R << "\n";
	}
	else {
		cout << N + (2 * R - 1) << "\n";
	}
	return 0;
}